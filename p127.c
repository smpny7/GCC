#include <stdio.h>

void message(void);
double input(void);
double area(double);
void disp(double);

int main(void) {
	double r, s;
	message();
	r = input();
	s = area(r);
	disp(s);
	return 0;
}

void message(void) {
	printf("r=");
}

double input(void) {
	double dt;
	scanf("%lf", &dt);
	return dt;
}

double area(double r) {
	return r*r*3.14159;
}

void disp(double d) {
	printf("S=%f\n", d);
}
