#include <quantum.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void f(quantum_reg *reg)
{
	int con = 0;
	if (!con)
		quantum_cnot(0, 2, reg);
}

int main(void)
{
	quantum_reg reg;
	srand(time(0));
	reg = quantum_new_qureg(5, 3);
	quantum_hadamard(0, &reg);
	quantum_hadamard(1, &reg);
	quantum_hadamard(2, &reg);
	f(&reg);
	quantum_hadamard(0, &reg);
	quantum_hadamard(1, &reg);
	printf("Gemessen %i\n", quantum_bmeasure_bitpreserve(0, &reg));
	return 0;
}
