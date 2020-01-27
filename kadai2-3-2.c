#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *fin,*fo1,*fo2,*fo3,*fo4;
  int sn,eng,math,ja,sci,i;
  char grade1[80]={0},grade2[80]={0},grade3[80]={0},grade4[80]={0};
   
  fin = fopen("score.csv","r");
  if(fin==NULL) return 1;
  
  fo1 = fopen("grade_Eng.csv","w");
  if(fo1==NULL) return 1;
  fo2 = fopen("grade_Math.csv","w");
  if(fo2==NULL) return 1;
  fo3 = fopen("grade_Japa.csv","w");
  if(fo3==NULL) return 1;
  fo4 = fopen("grade_Sci.csv","w");
  if(fo4==NULL) return 1;
  
  for(i=0;i<7;i++){
    fscanf(fin,"%d,%d,%d,%d,%d", &sn,&eng,&math,&ja,&sci);
   
    if(eng>=101){
      strcpy(grade1, "S+");
    }
    else if(eng>=90 && eng<=100){
      strcpy(grade1, "S");
    }
    else if(eng>=80 && eng<=89){
      strcpy(grade1, "A");
    }
    else if(eng>=70 && eng<=79){
      strcpy(grade1, "B");
    }
    else if(eng>=60 && eng<=69){
      strcpy(grade1, "C");
    }
    else if(eng>=0 && eng<=59){
      strcpy(grade1, "F");
    }
    else if(eng<=-1){
      strcpy(grade1, "X");
    }
    
    if(math>=101){
      strcpy(grade2, "S+");
    }
    else if(math>=90 && math<=100){
      strcpy(grade2, "S");
    }
    else if(math>=80 && math<=89){
      strcpy(grade2, "A");
    }
    else if(math>=70 && math<=79){
      strcpy(grade2, "B");
    }
    else if(math>=60 && math<=69){
      strcpy(grade2, "C");
    }
    else if(math>=0 && math<=59){
      strcpy(grade2, "F");
    }
    else if(math<=-1){
      strcpy(grade2, "X");
    }
    
    if(ja>=101){
      strcpy(grade3, "S+");
    }
    else if(ja>=90 && ja<=100){
      strcpy(grade3, "S");
    }
    else if(ja>=80 && ja<=89){
      strcpy(grade3, "A");
    }
    else if(ja>=70 && ja<=79){
      strcpy(grade3, "B");
    }
    else if(ja>=60 && ja<=69){
      strcpy(grade3, "C");
    }
    else if(ja>=0 && ja<=59){
      strcpy(grade3, "F");
    }
    else if(ja<=-1){
      strcpy(grade3, "X");
    }
    
    if(sci>=101){
      strcpy(grade4, "S+");
    }
    else if(sci>=90 && sci<=100){
      strcpy(grade4, "S");
    }
    else if(sci>=80 && sci<=89){
      strcpy(grade4, "A");
    }
    else if(sci>=70 && sci<=79){
      strcpy(grade4, "B");
    }
    else if(sci>=60 && sci<=69){
      strcpy(grade4, "C");
    }
    else if(sci>=0 && sci<=59){
      strcpy(grade4, "F");
    }
    else if(sci<=-1){
      strcpy(grade4, "X");
    }
    
    fprintf(fo1,"%d,%s\n",sn,grade1);
    fprintf(fo2,"%d,%s\n",sn,grade2);
    fprintf(fo3,"%d,%s\n",sn,grade3);
    fprintf(fo4,"%d,%s\n",sn,grade4);          
  }   
  
  fclose(fin);
  fclose(fo1);
  fclose(fo2);
  fclose(fo3);
  fclose(fo4);
  
  return 0;
}
