#include <stdio.h>

int average_of_index(int n);
double min_of_array_greater_than_lower_bound(double a[], int n, double lower_bound);
double median_of_array(double a[], int n);

int main(void){
	double a[] = {5.0, 2.8, 1.1, 3.7, 4.3};
	printf("The median of the double array a[]: %3.1f\n", median_of_array(a, 5));
	return 0;
}

int average_of_index(int n){
	return n/2+1;
}

double min_of_array_greater_than_lower_bound(double a[], int n, double lower_bound){
	 int i;
	 double min=10000;
	 for(i=0; i < n; i++)
	 	if(a[i] > lower_bound && a[i] < min )
	 		min=a[i];
	 return min;
}

double median_of_array(double a[], int n){
	int i;
	double lower_bound=0.0, b[5];
	for(i=0; i<n; i++) {
		b[i] = min_of_array_greater_than_lower_bound(a, n, lower_bound);
		lower_bound = b[i];
	}
	return b[average_of_index(n)-1];
}
