
//CHAPTER 04: LOOP CONTROL INSTRUCTION

//break statement
#include<stdio.h>

int main() {
  
  int number;
  while(1) {
    printf("Enter number: ");
    scanf("%d", &number);

    if(number %7 == 0 ) {
      printf("Number entered %d is multiple of 7 \n", number);
      break;
    }
    else {
      printf("Number entered %d is not multiple of 7 \n", number);
    }
  }

  printf("Thank you.");

  return 0;
}


// Practice Qs 18
// Keep taking numbers as input from user until
// user enters a number which is multiple of 7.