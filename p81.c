#include <stdio.h>

int main(void) {

	int i, sum, mul;
	
	sum = 0; mul = 1;
	for (i=1; i<=5; i++) {
		sum = sum + i;
		mul = mul * i;
	}
	printf("sum=%d mul=%d\n", sum, mul);
	
	for (i=40; i>=20; i=i-2) {
		printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}