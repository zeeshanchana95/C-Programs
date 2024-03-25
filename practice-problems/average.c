#include <stdio.h>

int main() {

    int num1 = 1; int num2 = 2; int num3 = 3;
    float avg = (num1 + num2 + num3) / 3.0;
    printf("Average: of numbers %d, %d, %d is %6.3f\n", num1, num2, num3, avg);

    return 0;
}