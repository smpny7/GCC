#include <stdio.h>

int main(void) {
    FILE *fin;
    fin = fopen("score.csv", "r");

    int i, j, student[80], eng[80], math[80], japa[80], sci[80];
    char raw[256]={}, user[80][256]={};
    for(i=0; fgets(raw, 256, fin)!=NULL; i++) {
        // printf("%s", raw);
        fscanf(fin, "%d, %d, %d, %d, %d", &student[i], &eng[i], &math[i], &japa[i], &sci[i]);
        printf("%d, %d, %d, %d, %d\n", student[i], eng[i], math[i], japa[i], sci[i]);
    }




        // for(i=0; ss[i]=='\n'; i++) {
        //     user1[i] = ss[i];
        // }
        // fscanf(user1, "%d, %d, %d, %d, %d", &student[0], &eng[0], &math[0], &japa[0], &sci[0]);

    // printf("%d", student[0]);
}