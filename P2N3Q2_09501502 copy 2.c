#include <stdio.h>

int main(void) {
    FILE *fin;
    fin = fopen("score.csv", "r");

    int i=0, student=0, eng=0, math=0, japa=0, sci=0;
    char raw[256]={};
    while(fscanf(fin, "%d, %d, %d, %d, %d", &student, &eng, &math, &japa, &sci) != EOF) {
        printf("%d, %d, %d, %d, %d\n", student, eng, math, japa, sci);
    }

    fclose(fin);
    return 0;

}