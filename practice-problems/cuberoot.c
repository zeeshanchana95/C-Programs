#include <stdio.h>

/*
    program to calculate cube root of the number given by user.
*/

int main() {

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Cube of Number: %d\n", number * number * number);

    return 0;

}