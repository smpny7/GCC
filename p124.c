#include <stdio.h>

double ave(double x, double y) {
	double wk;
	wk = (x + y) /2.0;
	return wk;
}

int main(void) {
	
	double a, b, c;
	
	a = 11.11;
	b = 33.33;
	c = ave(a, b);
	printf("a=%f b=%f average=%f\n", a, b, c);
	
	return 0;
}
