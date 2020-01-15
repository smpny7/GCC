#include <stdio.h>

int main(void) {
    FILE *fin;
    fin = fopen("score.csv", "r");

    int i=0, j, student[80], eng[80], math[80], japa[80], sci[80];
    char raw[256]={}, user[256]={};
    while(fgets(raw, 256, fin)!=NULL) {
        printf("%s", raw);
    }


        // for(i=0; ss[i]=='\n'; i++) {
        //     user1[i] = ss[i];
        // }
        // fscanf(user1, "%d, %d, %d, %d, %d", &student[0], &eng[0], &math[0], &japa[0], &sci[0]);

    // printf("%d", student[0]);
}