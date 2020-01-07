#include <stdio.h>

void disp_ary1(int n[], int len) {
	int i;
	for(i=0; i<len; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
}

void disp_ary2(int n[]) {
	int i = 0;
	for(i=0; n[i] != -1; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
}

int main(void) {
	int a[5] = {10, 20, 30, 40, 50};
	int b[6] = {66, 77, 88, 99, -1};
	
	disp_ary1(a, 5);
	disp_ary2(b);
	return 0;
}
