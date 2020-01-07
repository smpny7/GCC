#include <stdio.h>

int main(void) {

	int a, b;
	
	for (a=1; a<=3; a++) {
		printf("a=%d\n", a);
		for (b=1; b<=3; b++) {
			if (a==2 && b==2) break;
			printf("  b=%d\n", b);
		}
	}
	
	return 0;
}