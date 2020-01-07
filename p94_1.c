#include <stdio.h>

int main(void) {

	int i;
	
	for (i=1; i<=100; i++) {
		printf("%3d ", i);
		if(i%10 == 0) {
			printf("\n");
		}
	}
	
	printf("\n");
	
	return 0;
}