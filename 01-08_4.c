#include <stdio.h>
#include <math.h>

struct myst {
    double d1, d2;
};

struct myst cul(struct myst x, struct myst y) {
    struct myst wk;
    wk.d1 = pow(pow(x.d1, 2) + pow(y.d1, 2), 0.5);
    wk.d2 = pow(pow(x.d2, 2) + pow(y.d2, 2), 0.5);
    return wk;
}

int main(void)  {
    struct myst a, b = {3, 4}, c = {5, 12};

    a = cul(b, c);
    printf("%f %f\n", a.d1, a.d2);
    return 0;
}