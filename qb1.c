#include <quantum.h>
int main(void)
{
	quantum_reg reg;
	reg = quantum_new_qureg(0, 1);
	quantum_print_qureg(reg);
	return 0;
}
