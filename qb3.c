#include <quantum.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	quantum_reg reg;
	srand(time(0));
	reg = quantum_new_qureg(0, 1);
	quantum_hadamard(0, &reg);
	printf("Gemessen %i\n", quantum_bmeasure_bitpreserve(0, &reg));
	quantum_print_qureg(reg);
	return 0;
}
