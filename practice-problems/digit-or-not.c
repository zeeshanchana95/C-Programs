#include <stdio.h>

int main() {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') {
        printf("Entered character %c is digit", ch);
    }
    else {
        printf("Entered character %c is not a digit", ch);
    }
    return 0;
}