#include <stdio.h>

int main(void) {
	
	int i, n, sum;
	
	printf("Input number:  ");
	scanf("%d", &n);
	
	sum = 0;
	
	for (i=1; i<n; i++) {
		if (n%i==0) {
			printf("%d, ", i);
			sum = sum + i;
		}
	}
	
	printf("%d\n", n);
	
	sum = sum + n;
	printf("Summation is %d\n", sum);
	
	return 0;
}
