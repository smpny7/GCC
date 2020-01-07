#include <stdio.h>

int main(void) {

	int rate = 10;
	int original, tax, price;
	
	printf("Input original price\n");
	printf("Original Price = ");
	scanf("%d", &original);
	
	tax = original * rate / 100;
	price = tax + original;
	
	printf("--------------------\n");
	printf("Tax = %d\n", tax);
	printf("Price = %d\n", price);
	
	return 0;
}