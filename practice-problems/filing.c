#include<stdio.h>

int main() {
    
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch;
    ch = fgetc(fptr); //read first character
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
}