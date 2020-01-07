#include <stdio.h>

void calSum(int data[]);

int main(void) {
	
	int data[3];
	data[0]=3;
	data[1]=5;
	calSum(data);
	printf("%d\n", data[2]);
	return 0;
}

void calSum(int data[]) {
	data[2]=data[0]+data[1];
	return;
}
