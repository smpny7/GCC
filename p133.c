#include <stdio.h>

void disp_ary(int n[]) {
	printf("n[0]=%d\n", n[0]);
	printf("n[4]=%d\n", n[4]);
}

int main(void) {
	int dt[5] = {10, 20, 30, 40, 50};
	disp_ary(dt);
	
	return 0;
}
