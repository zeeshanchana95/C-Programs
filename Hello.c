// Practice Qs 12
// Write a Program to find if a character entered by user is uppercase or not.

#include <stdio.h>

int main() {

 char character;
 printf("Enter character: ");
 scanf("%c", &character);

 if(character >= 'A' && character <= 'Z') {
  printf("Uppercase character");
 } else if(character >= 'a' && character <= 'z') {
  printf("Lowercase character");
 } else {
  printf("not english alphabet character");
 }
  return 0;

}

/*
HOMEWORK SET
  a. Write a program to check if a given number is
  Armstrong number or not.
  (Search what is Armstrong number)
  b. Write a program to check if the given number is a natural number.
  (Natural numbers start from 1)
*/