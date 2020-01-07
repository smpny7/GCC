#include <stdio.h>
#include <string.h>

int main(void) {
	
	int i, j=0;
	char ss1[10], ss2[10];
	
	strcpy(ss1, "IKEDA");
	
	for (i=0; i<6; i++) {
		if (ss1[i]=='A' || ss1[i]=='I' || ss1[i]=='U' || ss1[i]=='E' || ss1[i]=='O'){
			;
		} else {
			ss2[j] = ss1[i];
			j++;
		} 
	}
	
	printf("%s > %s\n", ss1, ss2);
	for (i=0; i<(j-1); i++) {
		printf("%c is %d\n", ss2[i], ss2[i]);
	}
	
	return 0;
}
