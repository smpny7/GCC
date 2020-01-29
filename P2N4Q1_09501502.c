#include <stdio.h>

void print_nchar(int n, char c);
void print_rightTriangle(int n, char c);
void print_rectangle(int h, int w, char c);

void print_nchar(int n, char c) {
    int i;
    for(i=0;i<n;i++) {
        printf("%c", c);
    }
}

void print_rightTriangle(int n, char c) {
    int i;
    for(i=0;i<n;i++) {
        print_nchar(i+1, c);
        printf("\n");
    }
}

void print_rectangle(int h, int w, char c) {
    int i;
    for(i=0;i<h;i++) {
        print_nchar(w, c);
        printf("\n");
    }
}

int main() {
    int step;
    int height, width;

    scanf("%d", &step);
    print_rightTriangle(step, '*');
    printf("\n");

    scanf("%d", &height);
    scanf("%d", &width);
    print_rectangle(height, width, '+');
    return 0;
}
