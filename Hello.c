//Basic Sum Program:

#include<stdio.h> 
int main() {

  int a,b;
  printf("Enter a: ");
  scanf("%d",&a);

  printf("Enter b: ");
  scanf("%d",&b);

  // int sum = a + b;
  printf("Addition of %d and %d is: %d\n", a, b, a+b);
  printf("Subtraction of %d and %d is: %d\n", a, b, a-b);
  printf("Multiplication of %d and %d is: %d\n", a, b, a*b);
  printf("Division of %d and %d is: %d\n", a, b, a/b);

  return 0;
}


//Compilation:
  //a computer program that translates C code into machine code (0's and 1's)
  // C Program -> C Compiler -> Output File (a.exe or a.out)
  // Hello.cpp -> gcc Hello.c -> a.exe 
