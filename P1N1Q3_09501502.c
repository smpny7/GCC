#include <stdio.h>

int main(void) {

	int rate, yen, dollar, change;
	
		printf("Input rate\n");
		printf("rate = ");
		scanf("%d", &rate);
		
		printf("Input yen\n");
		printf("yen = ");
		scanf("%d", &yen);
		
		dollar = yen/rate;
		change = yen%rate;
		
		printf("------------\n");
		printf("dollar = %d\n", dollar);
		printf("change = %d\n", change);
	
	return 0;
}