#include<stdio.h>

int main() {

    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("%d is the greater number than %d", num1, num2);
    } else {
        printf("%d is the greater number than %d", num2, num1);
    }
    return 0;
}