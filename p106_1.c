#include <stdio.h>

int main(void) {

	int n, m, ans;
	
	printf("Enter First Number\n");
	scanf("%d", &n);
	printf("Enter Second Number\n");
	scanf("%d", &m);
	
	ans = n + m;
	printf("Answer = %d", ans);
	
	return 0;
}