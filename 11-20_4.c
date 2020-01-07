#include <stdio.h>

int main(void) {
	
	double dt, sum;
		
	while (1) {
		scanf("%lf", &dt);
		if (dt == 0.0) break;
		sum = sum + dt;
	}
	
	printf("SUM = %f\n", sum);
	
	return 0;
}
