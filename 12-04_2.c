#include <stdio.h>

int sum(int n) {
	int x=0, i;
	for(i=1; i<=n;i++) {
		x = x + i;
	}
	return x;
}

int main(void) {
	
	int n, x;
	
	n = 100;
	x = sum(n);
	printf("SUM=%d\n", x);
	
	return 0;
}
