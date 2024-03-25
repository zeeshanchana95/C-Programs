#include <stdio.h>

int main () {

    int number, factor;
    printf("Enter number (>1): ");
    scanf("%d", &number);

    if(number == 1 || number == 2 || number == 3) {
        printf("Entered number %d is prime", number);
    } else {
        factor = 4;
        while(number >= factor) {
            if(number % factor != 0) {
                factor++;
                continue;;
            } else {
                printf("Entered number %d is prime", number);
                break;
            }
            break;
        }
    }
    return 0;
}