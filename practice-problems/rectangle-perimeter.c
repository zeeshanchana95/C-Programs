/*
    program to calculate perimeter of rectangle according to sides given by user
*/

#include<stdio.h>

int main() {

    int a, b;
    int perimeter;
    printf("Enter Reactangle side a: ");
    scanf("%d", &a);
    printf("Enter Reactangle side a: ");
    scanf("%d", &b);

    perimeter = 2 * (a + b);
    printf("Perimeter of rectangle: %d", perimeter);

    return 0;
}