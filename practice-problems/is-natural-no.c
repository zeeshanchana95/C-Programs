#include <stdio.h>

int main() {

    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    if(number > 0) {
        printf("Entered number %d is natural number", number);
    } else {
        printf("Entered number %d is not natural number", number);
    }
    return 0;
}