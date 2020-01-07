#include <stdio.h>

double find_max(int data[], int count);
void normalizer(int data[], int count, double max, double data2[]);
void disp(double data2[], int count);

int main(void) {
	int st_num[8]={0,9,5,0,1,5,0,2}, count=8;
	double nrm_num[8], max;
	max = find_max(st_num, count);
	printf("maximum: %.3f\n", max);
	normalizer(st_num, count, max, nrm_num);
	disp(nrm_num, count);
	return 0;
}

double find_max(int data[], int count) {
	int i;
	double max = 0;
	for(i=0; i<count; i++) {
		if(max<data[i]){
			max = data[i]; 
		}
	}
	return max;
}

void normalizer(int data[], int count, double max, double data2[]) {
	int i;
	for(i=0; i<count; i++) {
		data2[i] = data[i] / max;
	}
	return;
}

void disp(double data2[], int count) {
	int i;
	printf("normalized_num:");
	for(i=0; i<count; i++) {
		printf(" %.3f", data2[i]);
	}
}

