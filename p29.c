#include <stdio.h>

int main(void) {
	int n8, n10, n16;
	double f1, f2;
	
	n8 = 0100;
	n10 = 100;
	n16 = 0x100;
	f1 = 1.234;
	f2 = 5.678e2;
	
	printf("n8 = %d\n", n8);
	printf("n10 = %d\n", n10);
	printf("n16 = %d\n", n16);
	printf("f1 = %f\n", f1);
	printf("f2 = %f\n", f2);
	
	return 0;
}