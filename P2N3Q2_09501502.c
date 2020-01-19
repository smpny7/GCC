#include <stdio.h>

char *rank(int score) {
    if (score>=101) {
        return "S+";
    } else if (score>=90 && score<=100) {
        return "S";
    } else if (score>=80 && score<=89) {
        return "A";
    } else if (score>=70 && score<=79) {
        return "B";
    } else if (score>=60 && score<=69) {
        return "C";
    } else if (score>=0 && score<=59) {
        return "F";
    } else {
        return "X";
    }
}

int main(void) {
    FILE *fin, *fout1, *fout2, *fout3, *fout4;
    fin = fopen("score.csv", "r");
    fout1 = fopen("grade_Eng.csv", "w");
    fout2 = fopen("grade_Math.csv", "w");
    fout3 = fopen("grade_Japa.csv", "w");
    fout4 = fopen("grade_Sci.csv", "w");

    int i, j, score, mem[5], student[80]={}, eng[80]={}, math[80]={}, japa[80]={}, sci[80]={};
    for(i=0; fscanf(fin, "%d, %d, %d, %d, %d", &mem[0], &mem[1], &mem[2], &mem[3], &mem[4]) != EOF; i++) {
        student[i] = mem[0];
        eng[i] = mem[1];
        math[i] = mem[2];
        japa[i] = mem[3];
        sci[i] = mem[4];
    }

    for(j=0; j<i; j++) {
        fprintf(fout1, "%d, %s\n", student[j], rank(eng[j]));
    }
    for(j=0; j<i; j++) {
        fprintf(fout2, "%d, %s\n", student[j], rank(math[j]));
    }
    for(j=0; j<i; j++) {
        fprintf(fout3, "%d, %s\n", student[j], rank(japa[j]));
    }
    for(j=0; j<i; j++) {
        fprintf(fout4, "%d, %s\n", student[j], rank(sci[j]));
    }

    fclose(fin);
    fclose(fout1);
    fclose(fout2);
    fclose(fout3);
    fclose(fout4);
 
    return 0;

}