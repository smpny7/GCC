#include<stdio.h>

FILE *fin, *fout1, *fout2, *fout3, *fout4;

void grade_eng(int student, int eng)
{
	fprintf(fout1, "%d,", student);
	
	if(eng>=100) {
		fprintf(fout1, "%s\n", "S+");
	} else if(eng>=90) {
		fprintf(fout1, "%s\n", "S");
	} else if(eng>=80) {
		fprintf(fout1, "%s\n", "A");
	} else if(eng>=70) {
		fprintf(fout1, "%s\n", "B");
	} else if(eng>=60) {
		fprintf(fout1, "%s\n", "C");
	} else if(0<=eng&&eng<=59){
		fprintf(fout1, "%s\n", "F");
	} else if(eng<=-1){
		fprintf(fout1, "%s\n", "X");
	}
}

void grade_math(int student, int math)
{
	fprintf(fout2, "%d,", student);
	
	if(math>=100) {
		fprintf(fout2, "%s\n", "S+");
	} else if(math>=90) {
		fprintf(fout2, "%s\n", "S");
	} else if(math>=80) {
		fprintf(fout2, "%s\n", "A");
	} else if(math>=70) {
		fprintf(fout2, "%s\n", "B");
	} else if(math>=60) {
		fprintf(fout2, "%s\n", "C");
	} else if(0<=math&&math<=59){
		fprintf(fout2, "%s\n", "F");
	} else if(math<=-1){
		fprintf(fout2, "%s\n", "X");
	}
}

void grade_japa(int student, int japa)
{
	fprintf(fout3, "%d,", student);
	
	if(japa>=100) {
		fprintf(fout3, "%s\n", "S+");
	} else if(japa>=90) {
		fprintf(fout3, "%s\n", "S");
	} else if(japa>=80) {
		fprintf(fout3, "%s\n", "A");
	} else if(japa>=70) {
		fprintf(fout3, "%s\n", "B");
	} else if(japa>=60) {
		fprintf(fout3, "%s\n", "C");
	} else if(0<=japa&&japa<=59){
		fprintf(fout3, "%s\n", "F");
	} else if(japa<=-1){
		fprintf(fout3, "%s\n", "X");
	}
}
void grade_sci(int student, int sci)
{
	fprintf(fout4, "%d,", student);
	
	if(sci>=100) {
		fprintf(fout4, "%s\n", "S+");
	} else if(sci>=90) {
		fprintf(fout4, "%s\n", "S");
	} else if(sci>=80) {
		fprintf(fout4, "%s\n", "A");
	} else if(sci>=70) {
		fprintf(fout4, "%s\n", "B");
	} else if(sci>=60) {
		fprintf(fout4, "%s\n", "C");
	} else if(0<=sci&&sci<=59){
		fprintf(fout4, "%s\n", "F");
	} else if(sci<=-1){
		fprintf(fout4, "%s\n", "X");
	}
}



int main(void)
{
	int i;
	int student, eng, math, japa, sci;
	char *infile = "score.csv";
	
	char *outfile1 = "grade_Eng.csv";
	char *outfile2 = "grade_Math.csv";
	char *outfile3 = "grade_Japa.csv"; 
	char *outfile4 = "grade_Sci.csv"; 
	
	
	
	fin = fopen(infile, "r");
	
	fout1 = fopen(outfile1, "w");
	fout2 = fopen(outfile2, "w");
	fout3 = fopen(outfile3, "w");
	fout4 = fopen(outfile4, "w");

	for(i=1; i<=7; i++){
		fscanf(fin, "%d, %d, %d, %d, %d", &student, &eng, &math, &japa, &sci);
		
		grade_eng(student, eng);
		grade_math(student, math);
		grade_japa(student, japa);
		grade_sci(student, sci);
	}
	
	
	fclose(fin);
	fclose(fout1);  fclose(fout2);  fclose(fout3);  fclose(fout4); 
	
	return 0;
	
}


