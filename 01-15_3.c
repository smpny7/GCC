#include <stdio.h>
#include <string.h>

int main(void) {
    int i=0, j=0, k, l;
    char s1[80]={}, s2[80]={}, s3[80]={};
    
    scanf("%s", s1);
    scanf("%s", s2);

    i = strlen(s1);
    j = strlen(s2);

    printf("%d\n", i);
    printf("%d\n", j);

    for(k=0; k<i; k++) {
        s3[k] = s1[k];
    }
    for(l=0; l<j; l++) {
        s3[l+i] = s2[l];
    }

    printf("%s", s3);

    return 0;
}