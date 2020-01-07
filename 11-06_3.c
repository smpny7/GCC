#include <stdio.h>

int main(void) {

	int i, j;
	
	printf("Input The Number: ");
	scanf("%d", &j);
	printf("Divisor: ");
	
	for (i=1; i<=j; i++) {
		if(j%i==0){
			printf("%d ", i);
		}
	}
	
	return 0;
}