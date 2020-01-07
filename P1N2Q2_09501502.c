#include <stdio.h>

int main(void) {
	
	int i, c, m;
	
	printf("Input the initial term: ");
	scanf("%d", &i);
	
	printf("Input the common difference: ");
	scanf("%d", &c);
	
	printf("Input the maximum value: ");
	scanf("%d", &m);
	
	printf("Arithmetic sequence: ");
	
	while (i <= m) {
		printf("%d ", i);
		i = i + c;
	}
	
	return 0;
}