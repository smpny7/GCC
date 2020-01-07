#include <stdio.h>

int count_length(char data[]);
void convert_upper(char data[], int length, char data2[]);
int count_converted_chars(char data[], char data2[], int length);

int main(void) {
	int length, diff;
	char data[100], data2[100];
	printf("Input a string: ");
	scanf("%s", data);
	length = count_length(data);
	convert_upper(data, length, data2);
	diff = count_converted_chars(data, data2, length);
	printf("str. : chars = %s : %d\n", data2, diff);
	return 0;
}

int count_length(char data[]) {
	int len;
	for(len=0; data[len] != '\0'; len++);
	return len;
}

void convert_upper(char data[], int length, char data2[]) {
	int i;
	for(i=0; i<length; i++) {
		if(data[i]>='a' && data[i]<='z') {
			data2[i] = data[i] - 32;
		} else {
			data2[i] = data[i];
		}
	}
	return;
}

int count_converted_chars(char data[], char data2[], int length) {
	int i, diff = 0;
	for(i=0; i<length; i++) {
		if(data[i] != data2[i]) {
			diff++;
		}
	}
	return diff;
}

