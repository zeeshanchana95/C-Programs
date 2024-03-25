#include<stdio.h>

int main () {

    int num1 = 1;
    int num2 = 2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int max;
    if((*ptr1) > (*ptr2)) {
        max = num1;
    } else {
        max = num2;
    }
    printf("Maximum number is %d", max);
    return 0;
}