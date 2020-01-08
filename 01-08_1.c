#include <stdio.h>

struct myst {
    int d1, d2;
};

struct myst add(struct myst x, struct myst y) {
    struct myst wk;
    wk.d1 = x.d1 * y.d1;
    wk.d2 = x.d2 * y.d2;
    return wk;
}

int main(void)  {
    struct myst a, b = {10, 20}, c = {100, 200};

    a = add(b, c);
    printf("%d %d\n", a.d1, a.d2);
    return 0;
}