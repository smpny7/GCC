#include <stdio.h>

int main(void) {
	
	int i, j, x, y;
	
	printf("x:");
	scanf("%d", &x);
	
	printf("y:");
	scanf("%d", &y);
	
	for(j=0; j<y; j++){
		for(i=0; i<x; i++){
			printf("X");
		}
		printf("\n");
	}
	
	return 0;
}
