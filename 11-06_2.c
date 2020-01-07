#include <stdio.h>

int main(void) {

	int i;
	
	for (i=0; i<=99; i++) {
		printf("%2d ", i);
		if(i%10 == 9) {
			printf("\n");
		}
	}
	
	printf("\n");
	
	return 0;
}