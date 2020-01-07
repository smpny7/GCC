#include <stdio.h>

int main(void) {

	int n, m, ans1, ans2, ans3, ans4;
	
	printf("Enter First Number\n");
	scanf("%d", &n);
	printf("Enter Second Number\n");
	scanf("%d", &m);
	
	ans1 = n + m;
	ans2 = n - m;
	ans3 = n * m;
	ans4 = n / m;

	printf("Addition = %d\n", ans1);
	printf("Subtraction = %d\n", ans2);
	printf("Multiplication = %d\n", ans3);
	printf("Division = %d\n", ans4);
	
	return 0;
}