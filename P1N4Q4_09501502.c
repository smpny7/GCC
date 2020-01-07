#include <stdio.h>

int main(void) {
	
	int i, len;
	char str[80]={0};
	
	printf("Input a string: ");
	scanf("%s", str);
	
	for(len=0; len<80; len++) {
		if(str[len]=='\0') {
			break;
		}
	}
	
	printf("Length: %d\n", len);
	printf("Character codes: ");
	
	for(i=0; i<len-1; i++) {
		printf("%d ,", str[i]);
	}
	
	printf("%d\n", str[len-1]);
	
	for(i=0; i<len; i++) {
		str[i+len] = str[i] - 32;
	}
	
	printf("Concatenation: %s\n", str);
	
	return 0;
}
