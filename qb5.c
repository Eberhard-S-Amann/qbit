#include <stdio.h>
#include <math.h>
#include <quantum.h>

#define pi 3.14159265358979

const double DE = 1;
const double g = 0.1;

quantum_reg H(unsigned long long i, double t)
{
  quantum_reg reg = quantum_new_qureg_size(2, 1);

  reg.node[0].state = i;
  reg.node[0].amplitude = i*DE;

  reg.node[1].state = 1^i;
  reg.node[1].amplitude = g*sin(DE*t);

  return reg;

}

int main()
{
  double T = 2*pi/g;
  double dt = 0.01;
  double t;
  quantum_reg reg;

  reg = quantum_new_qureg_size(2, 1);

  reg.node[0].state = 0;   
  reg.node[0].amplitude = 1;

  reg.node[1].state = 1;   
  reg.node[1].amplitude = 0;

  for(t=0; t<T; t+=dt)
    {
      quantum_rk4(&reg, t, dt, &H);
      printf("%f %f\n", t, quantum_prob(reg.node[0].amplitude));
    }

  return 0;
}

