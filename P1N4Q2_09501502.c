#include <stdio.h>

int main(void) {
	
	int score;
	
	printf("Input score: ");
	scanf("%d", &score);
	printf("Grade: ");
	
	if (score>=90 && score<=100) {
		printf("A+\n");
	} else if (score>=80 && score<=89) {
		printf("A\n");
	} else if (score>=70 && score<=79) {
		printf("B\n");
	} else if (score>=60 && score<=69) {
		printf("C\n");
	} else if (score>=0 && score<=59) {
		printf("F\n");
	} else {
		printf("X\n");
	}
	
	return 0;
}
