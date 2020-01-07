#include <stdio.h>

double s(double x, double y) {
	double s;
	s = x * y;
	return s;
}

int main(void) {
	
	double a, b, c;
	
	a = 2;
	b = 3;
	c = s(a, b);
	printf("S=%f\n", c);
	
	return 0;
}
