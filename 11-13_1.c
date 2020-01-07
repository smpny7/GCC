#include <stdio.h>

int main(void) {
	
	int a[3], i, j=0, sum=0;
	
	while(j<3) {
		scanf("%d", &a[j]);
		j++;
	}
	
	for (i=0; i<3; i++) {
		sum = sum + a[i];
	}
	
	printf("%d\n", sum);
	
	return 0;
}
