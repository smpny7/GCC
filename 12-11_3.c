#include <stdio.h>

void reverse(char ss[]);

int main(void) {
	
	char ss[] = "Okayama";
	reverse(ss);
	printf("ss:%s\n", ss);
	return 0;
}

void reverse(char ss[]) {
	int len, i, half;
	char a;
	for(len=0; ss[len]!='\0'; len++);
	half = len/2;
	for(i=0;i<half;i++) {
		a = ss[i];
		ss[i] = ss[len-i-1];
		ss[len-i-1] = a;
	}
	return;
}
