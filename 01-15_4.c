#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(void) {
    FILE *fp;
    fp = fopen("outfile.txt", "w");

    int i;
    for(i=0; i<=180; i+=30) {
        fprintf(fp, "cos(%3d) = %f\n", i, cos(i*pi/180));
    }
    fclose(fp);
    return 0;
}