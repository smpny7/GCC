#include <stdio.h>
#include <string.h>

int main(void) {
	
	int i, j, len, upp = -1, mem;
	char str[10] = {0};
	
	printf("String? ");
	for (len=0; len<10; len++) {
		scanf("%c", &str[len]);
		if (str[len] == '\n') {
			break;
		}
	}
	
	printf("Entered string is ");
	for (i=0; i<len; i++) {
		printf("%c", str[i]);
	}
	printf(".\n");
	
	printf("The length of this string is %d.\n", len);
	
	for (i=0; i<len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' ) {
			upp = i;
			break;
		}
	}
	
	if (upp == -1){
		printf("This string has no uppercase.\n");
	} else {
		printf("The subscript of the first uppercase is %d.\n", upp);
		
		for (i=0; i<len; i++) {
			mem = str[upp];
			if (upp + 1 == len) {
				str[upp] = str[0];
				str[0] = mem;
				upp = 0;
				for (j=0; j<len; j++) {
					printf("%c", str[j]);
				}
				printf("\n");
			} else {
				str[upp] = str[upp+1];
				str[upp+1] = mem;
				upp++;
				for (j=0; j<len; j++) {
					printf("%c", str[j]);
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
