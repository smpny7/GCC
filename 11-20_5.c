#include <stdio.h>

int main(void) {
	
	int i, len, mem, nogood;
	char str[80] = {0};
	
	for (len=0; len<80; len++) {
		scanf("%c", &str[len]);
		if (str[len] == '\n') {
			break;
		}
	}
	
	while (1) {
		nogood = 0;
		for (i=0; i<len; i++) {
			if (str[i] > str[i+1]) {
				mem = str[i];
				str[i] = str[i+1];
				str[i+1] = mem;
				nogood = 1;
			}
		}
		if (nogood == 0) break;
	}
	
	for (i=0; i<=len; i++) {
		printf("%c", str[i]);
	}
	
	return 0;
}
