#include <stdio.h>

double delta(char *xd) {
    int i;
    double x2=0, x=0;
    for(i=0;i<6;i++) {
        x2 += xd[i] * xd[i];
    }
    for(i=0;i<6;i++) {
        x += xd[i];
    }
    x = x * x;
    return 7*x2-x;
}

void cal_a(double *a, char *xd, char *yd) {
    int i;
    double xy=0, x=0, y=0, del;
    for(i=0;i<6;i++) {
        xy += xd[i] * yd[i];
    }
    for(i=0;i<6;i++) {
        x += xd[i] * xd[i];
    }
    for(i=0;i<6;i++) {
        y += yd[i] * yd[i];
    }
    del = delta(xd);
    *a = ((7*xy) - x*y) / del;
}

void cal_b(double *b, char *xd, char *yd) {
    int i;
    double y, x2, x, xy, del;
    for(i=0;i<6;i++) {
        y += yd[i] * yd[i];
    }
    for(i=0;i<6;i++) {
        x2 += xd[i];
    }
    x2 = x2 * x2;
    for(i=0;i<6;i++) {
        x += xd[i] * xd[i];
    }
    for(i=0;i<6;i++) {
        xy += xd[i] * yd[i];
    }
    del = delta(xd);
    *b = (y*x2 - x*xy) / del;
}


int main(void) {
    double *a, *b;
    double xd[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    double yd[6] = {5.0, 14.4, 23.1, 32.3, 41.0, 50.4};

    cal_a(&a, xd, yd);
    cal_b(&b, xd, yd);

    printf("%f\n", a);
    printf("%f\n", b);

    return 0;
}
