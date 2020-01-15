#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[]="ABC", s2[]="abc";
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    strcpy(s1, s2);
    printf("%d\n", strcmp(s1, s2));
    s2[1]='\0';
    printf("%d\n", strcmp(s1, s2));
    return 0;
}