#include <stdio.h>

struct Point {
    int p;
    char name[30];
};

int main(void) {
    int i;
    int mini, maxi;
    double minp, maxp;
    struct Point dat[3];

    for(i=0;i<3;i++){
        printf("Name ?:" );
        scanf("%s", dat[i].name);
        printf("Point ?:" );
        scanf("%d", &dat[i].p);
    }

    minp = 1000000;
    maxp = -1;
    for(i=0;i<3;i++) {
        if(dat[i].p>maxp) {
            maxp = dat[i].p;
            maxi = i;
        }
        if(dat[i].p<minp) {
            minp = dat[i].p;
            mini = i;
        }
    }
    printf("Max: %s, Point :%d\n", dat[maxi].name, dat[maxi].p);
    printf("Min: %s, Point :%d\n", dat[mini].name, dat[mini].p);

    return 0;
}
