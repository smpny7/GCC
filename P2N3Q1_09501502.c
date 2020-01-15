#include <stdio.h>
#include <math.h>
#define pi 3.1415

int funNum(void) {
    int num;
    printf("Input a function number:\n");
    printf("1) cos, 2) exp, 3) fabs\n> ");
    scanf("%d", &num);
    return num;
}

int integrity(int num) {
    if(num == -1) {
        printf("The function calculator quits.\n");
        return 0;

    } else if (num == 1) {
        fun1(num);
        return 0;

    } else if (num == 2) {
        fun2(num);
        return 0;

    } else if (num == 3) {
        fun3(num);
        return 0;
        
    } else {
        printf("Input a correct function number from 1 to 3.\n");
        return 1;
    }
}

double inPar(void) {
    double value;
    printf("Input the parameter:\n> ");
    scanf("%lf", &value);
    return value;
}

void fun1(int num) {
    double value;
    value = inPar();
}

int main(void) {
    int err = 1;
    while(err) {
        int num = funNum();
        err = integrity(num);
    }

    return 0;
}