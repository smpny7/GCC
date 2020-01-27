#include <stdio.h>
#include <string.h>

void cal(int sub, char *rank){
	if(101<=sub) strcpy(rank, "S+");
	if(90<=sub && sub<=100) strcpy(rank, "S"); 
	if(80<=sub && sub<=89) strcpy(rank, "A");
	if(70<=sub && sub<=79) strcpy(rank, "B");
	if(60<=sub && sub<=69) strcpy(rank, "B");
	if(0<=sub && sub<=59) strcpy(rank, "C");
	if(sub<=-1) strcpy(rank, "X");
	return;
}

int main(void){
	FILE *fin, *foutE, *foutM, *foutJ, *foutS;
	int student, i, eng, math, japa, sci;
	char rank;
	char *infile="score.csv";
	char *outEng="grade_Eng.csv";
	char *outMath="grade_Math.csv";
	char *outJapa="grade_Japa.csv";
	char *outSci="grade_Sci.csv";
	if(fin=fopen(infile, "r")==NULL){
		printf("Can not open the specified file.\n");
		return(-1);
	}
	foutE=fopen(outEng, "w");
	foutM=fopen(outMath, "w");
	foutJ=fopen(outJapa, "w");
	foutS=fopen(outSci, "w");
	for(i=0; i<=6; i++){
		fscanf(fin, "%d,%d,%d,%d,%d", &student, &eng, &math, &japa, &sci);
		cal(eng, &rank);
		cal(math, &rank);
		cal(japa, &rank);
		cal(sci, &rank);
		fprintf(foutE, "%d,%s", student, rank);
		fprintf(foutM, "%d,%s", student, rank);
		fprintf(foutJ, "%d,%s", student, rank);
		fprintf(foutS, "%d,%s", student, rank);
	}
	fclose(foutE); fclose(foutM); fclose(foutJ); fclose(foutS);
	return 0;
}