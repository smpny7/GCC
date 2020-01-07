#include <stdio.h>

int main(void) {
    char ss[80], *p;
    int i;

    scanf("%s", ss);
    p = ss;

    for(i=0; ss[i]!='\0'; i++)
        printf("%c", *p++);
    
    return 0;
}