#include <stdio.h>

int main(void) {
	
	int i, j, k=0, a[10], b[10];
	double sum1, ave1, sum2, ave2;
		
	for (i=0; i<10; i++) {
		printf("Number %d?: ", i);
		scanf("%d", &a[i]);
		if (a[i] <= 0) {
			break;
		}
	}
	
	printf("Enterd number(s) are ");
	for (j=0; j<i; j++) {
		if (j!=(i-1)) {
			printf("%d,", a[j]);
		} else {
			printf("%d\n", a[j]);
		}
	}
		
	for (j=0; j<i; j++) {
		sum1 += a[j];
	}
	ave1 = sum1 / i;
	
	printf("The average of %d number(s) is %.3f.\n", i, ave1);
	
	for (j=0; j<i; j++) {
		if (a[j]%2 == 0) {
			b[k] = a[j];
			k++;
		}
	}
	
	if(k!=0) {
		printf("Enterd even number(s) are ");
		for (j=0; j<k; j++) {
			if (j!=(k-1)) {
				printf("%d,", b[j]);
			} else {
				printf("%d\n", b[j]);
			}
		}
		
		for (j=0; j<k; j++) {
			sum2 += b[j];
		}
		
		ave2 = sum2 / k;
		
		printf("The average of %d number(s) is %.3f.\n", k, ave2);
	}
	
	return 0;
}
