#include <stdio.h>

int main(void) {

	int dt = 100;
	int ans;
	
	ans = dt+1;
	printf("Answer1 = %d\n", ans);
	
	++ans;
	printf("Answer2 = %d\n", ans);
	
	ans++;
	printf("Answer3 = %d\n", ans);
	
	ans += 1;
	printf("Answer4 = %d\n", ans);
	
	return 0;
}