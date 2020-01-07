#include <stdio.h>

void ssc(char *p1, char *p2) {
	int i, j;

	for(i=0; *(p1+i) != '\0'; i++);
	for(j=0; j<i; j++) {
		*(p2+j) = 219 - *(p1+j);
	}
	*(p2+i) = '\0';

	return;
}

int main(void) {
	char ptxt[100];
	char ctxt[100];
	
	printf("Input a string >");
	scanf("%s", ptxt);
	
	ssc(ptxt, ctxt);
	
	printf("Original string: %s\n", ptxt);
	printf("Converted string: %s\n", ctxt);
	
	return 0;
}
