#include <stdio.h>

int main(void) {

	double r = 12.0;
	double pie = 3.14159;
	double circum, area;
	
	circum = 2*pie*r;
	area = pie*r*r;
	
	printf("Circumference = %f\n", circum);
	printf("Area = %f\n", area);

	return 0;
}