#include <stdio.h>

void c_swap(char *a, char *b);
int reverse_len(char s[]);

int main(void) {
    int len;
    char str[] = "abcde";
    len = reverse_len(str);
    printf("%s %d\n", str, len);
    return 0;
}

void c_swap(char *x, char *y) {
    char z;
    z = *x;
    *x = *y;
    *y = z;
}

int reverse_len(char s[]) {
    int i=0, j=0, k;
    while(s[i]!='\0') i++; k = i; i--;
    while(i>j) {
        c_swap(&s[i], &s[j]);
        j++;
        i--;
    }
    return k;
}
