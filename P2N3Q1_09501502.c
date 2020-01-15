#include <stdio.h>
#include <math.h>
#define pi 3.1415

int funNum(void);
int loopCheck(int num);
double inPar(void);
void fun1(int num);
void fun2(int num);
void fun3(int num);

int funNum(void) {
    int num;
    printf("Input a function number:\n");
    printf("1) cos, 2) exp, 3) fabs\n> ");
    scanf("%d", &num);
    return num;
}

int loopCheck(int num) {
    if(num == -1) {
        printf("The function calculator quits.\n");
        return 0;

    } else if (num == 1) {
        fun1(num);
        printf("\n");
        return 1;

    } else if (num == 2) {
        fun2(num);
        printf("\n");
        return 1;

    } else if (num == 3) {
        fun3(num);
        printf("\n");
        return 1;
        
    } else {
        printf("Input a correct function number from 1 to 3.\n");
        printf("\n");
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
    printf("cos(%3.2f) is %.4f.\n", value, cos(value*pi/180));
}

void fun2(int num) {
    double value;
    value = inPar();
    printf("exp(%.2f) is %.4f.\n", value, exp(value));
}

void fun3(int num) {
    double value;
    value = inPar();
    printf("abs(%.2f) is %.4f.\n", value, fabs(value));
}

int main(void) {
    int loop = 1;
    while(loop) {
        int num = funNum();
        loop = loopCheck(num);
    }
    return 0;
}