#include <stdio.h>
#include <string.h>

int main(void){
	char s[10];
	
	strcpy(s, "abcdef");
	char *p;
	p = s;
	
	printf("[%s]\n", p);
	*(p+3) = '\0';
	printf("[%s]\n", p);
	*(p+3) = 'X';
	printf("[%s]\n", p);
	*(p+3) = '\0';
	printf("[%s]\n", p);
	
	return 0;
}