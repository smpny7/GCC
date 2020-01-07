#include <stdio.h>

int main(void) {
	
	double m, n, ans;
	
	scanf("%lf", &m);
	scanf("%lf", &n);
	
	ans = m / n;
	
	printf("%.20f\n", ans);
	
	return 0;
}
