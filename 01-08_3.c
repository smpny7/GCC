#include <stdio.h>
#include <string.h>

struct Person {
    char name[40];
    int height;
    int weight;
};

int main(void) {
    struct Person dt[10];

    strcpy(dt[1].name, "TanakaKenichi");
    dt[1].height = 180;
    dt[1].weight = 70;

    dt[5] = dt[1];
    printf("%s %d %d\n", dt[5].name, dt[5].height, dt[5].weight);
}
