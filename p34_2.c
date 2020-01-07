#include <stdio.h>

int main(void) {

	int a = 'A';
	int n8 = 0100;
	int n10 = 100;
	int n16 = 0x100;
	
	printf("Character Code \"A\" = %d\n", a);
	printf("Octal Number \"100\" = %d\n", n8);
	printf("Decimal Number \"100\" = %d\n", n10);
	printf("Hexadecimal \"100\" = %d\n", n16);
	
	return 0;
}