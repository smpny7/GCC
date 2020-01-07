#include <stdio.h>

int main(void) {

	int n;
	
	printf("----- break test\n");
	for (n=1; n<=3; n++) {
		printf("%d start\n", n);
		if (n == 2) break;
		printf("%d end\n", n);
	}
	
	printf("----- continue test\n");
	for (n=1; n<=3; n++) {
		printf("%d start\n", n);
		if (n == 2) continue;
		printf("%d end\n", n);
	}
	
	return 0;
}