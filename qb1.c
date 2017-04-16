#include <quantum.h>
int main(void)
{
	quantum_reg reg, reg1;

	reg = quantum_new_qureg(0, 1);
	quantum_print_qureg(reg);

	reg1 = quantum_new_qureg(0, 4);
	quantum_print_qureg(reg1);
	return 0;
}
