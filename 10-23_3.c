#include <stdio.h>

int main(void) {

	int a, b, quo, rem;
	double a_db, b_db;
	
	printf("Calculate a/b\n");
	printf("a = ");
	scanf("%lf", &a_db);
	printf("b = ");
	scanf("%lf", &b_db);
	
	a = (int)(a_db+0.5);
	b = (int)(b_db+0.5);	
	
	quo = a / b;
	rem = a % b;
	
	printf("--------------------\n");
	printf("Quotient = %d\n", quo);
	printf("Remainder = %d\n", rem);
	
	return 0;
}