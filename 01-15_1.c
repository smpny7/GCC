#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(void) {
    int i;
    for(i=0; i<=180; i+=30) {
        printf("%f\n", cos(i*pi/180));
    }
    return 0;
}