#include <stdio.h>

int main(void) {
	
	double s, t, v;
	
	printf("t: ");
	scanf("%lf", &t);
	
	s = 4000;
	v = s / t;
	
	printf("v = %f\n", v);

	return 0;
}
