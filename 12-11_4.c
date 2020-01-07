#include <stdio.h>

void order(char number[], int len);

int main(void) {
	
	int len;
	char number[] = "09501502";
	for(len=0; number[len]!='\0'; len++);
	order(number, len);
	printf("%s\n", number);
	return 0;
}

void order(char number[], int len) {
	int i, point=0, memory=0;
	for(point=0; point<len-1; point++) {
		for(i=point+1; i<len; i++) {
			if(number[point]>number[i]) {
				memory = number[i];
				number[i] = number[point];
				number[point] = memory;
			}
		}
	}
	return;
}
