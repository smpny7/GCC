#include <stdio.h>

int main(void) {

	int a, b, h, ans;
	double a_db, b_db, h_db, ans_db;
	
		printf("Input upper base\n");
		printf("a = ");
		scanf("%d", &a);
		
		printf("Input lower base\n");
		printf("b = ");
		scanf("%d", &b);
		
		printf("Input height\n");
		printf("h = ");
		scanf("%d", &h);
		
		ans = (a+b)*h/2;
		
		printf("Answer = %d\n", ans);
	
	printf("----------------\n");
	
		printf("Input upper base\n");
		printf("a = ");
		scanf("%lf", &a_db);
		
		printf("Input lower base\n");
		printf("b = ");
		scanf("%lf", &b_db);
		
		printf("Input height\n");
		printf("h = ");
		scanf("%lf", &h_db);
		
		ans_db = (a+b)*h/2;

		printf("Answer = %f\n", ans_db);
	
	return 0;
}