#include <stdio.h>

int main(void) {
	
	double dt, sum;
	
	scanf("%lf", &dt);
	
	while (dt != 0.0) {
		sum = sum + dt;
		scanf("%lf", &dt);
	}
	
	printf("SUM = %f\n", sum);
	
	return 0;
}
