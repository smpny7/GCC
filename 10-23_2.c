#include <stdio.h>

int main(void) {

	int a, b, quo, rem;
	
	printf("Calculate a/b\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	quo = a / b;
	rem = a % b;
	
	printf("--------------------\n");
	printf("Quotient = %d\n", quo);
	printf("Remainder = %d\n", rem);
	
	return 0;
}