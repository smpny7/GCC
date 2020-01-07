#include <stdio.h>

void replace(char ss[]);

int main(void) {
	
	char ss[] = "Okayama";
	replace(ss);
	printf("ss:%s\n", ss);
	return 0;
}

void replace(char ss[]) {
	int i;
	for(i=0; ss[i]!='\0'; i++){
		if(ss[i]=='a'){
			ss[i]='@';
		}
	}
	return;
}
