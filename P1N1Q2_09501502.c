#include <stdio.h>

int main(void) {

	double c, f;
	
		printf("Input celsius\n");
		printf("c = ");
		scanf("%lf", &c);
		
		f = c*9/5+32;
		
		printf("Fahrenheit = %f\n", f);
	
	return 0;
}