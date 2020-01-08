#include <stdio.h>
#include <string.h>

struct Person {
    char name[40];
    int height;
    int weight;
};

void dataout(struct Person ps) {
    printf("name=%s height=%d weight=%d\n", ps.name, ps.height, ps.weight);
}

int main(void) {
    struct Person dt, dt2;

    strcpy(dt.name, "TanakaKenichi");
    dt.height = 180;
    dt.weight = 70;

    dt2 = dt;
    dataout(dt2);
    return 0;
}