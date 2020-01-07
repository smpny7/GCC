#include <stdio.h>

int main(void) {

	int n;
	
	n = '\n';
	printf("%d\n", n);
	n = '\x40';
	printf("%d\n", n);
	
	printf("AAA\tBBB\tCCC\nDDD\tEEE\tFFF\n");
	
	return 0;
}