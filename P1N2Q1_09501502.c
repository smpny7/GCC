#include <stdio.h>

int main(void) {
	
	char s, a;
	
	printf("Input a phoneword character: ");
	scanf("%c", &s);
	
	if(s=='A' || s=='B' || s=='C') {
		a = '2';
	} else if (s=='D' || s=='E' || s=='F') {
		a = '3';
	} else if (s=='G' || s=='H' || s=='I') {
		a = '4';
	} else if (s=='J' || s=='K' || s=='L') {
		a = '5';
	} else if (s=='M' || s=='N' || s=='O') {
		a = '6';
	} else if (s=='P' || s=='Q' || s=='R' || s=='S') {
		a = '7';
	} else if (s=='T' || s=='U' || s=='V') {
		a = '8';
	} else if (s=='W' || s=='X' || s=='Y' || s=='Z') {
		a = '9';
	} else if (s>='0' && s<='9') {
		a = s;
	} else if (s=='-') {
		a = '-';
	} else {
		a = '?';
	}
	
	printf("Phone number character: %c", a);
	
	
	return 0;
}