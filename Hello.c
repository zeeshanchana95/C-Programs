// Practice Qs 8
// Print 1 (true) or O(false) for following statements:
  // a. if it's sunday & it's snowing -> true
  // b. if it's monday or it's raining -> true
  // c. if a number is greater than 9 & less than 100 -> true (2 digit number)

#include<stdio.h>

int main() {
 
 // a. if it's sunday & it's snowing -> true
  // int isSunday = 1;
  // int isSnowing = 1;
  // printf("%d \n", isSunday && isSnowing); //1
  
  int isSunday = 0;
  int isSnowing = 1;
  printf("%d \n", isSunday && isSnowing); //0


  // b. if it's monday or it's raining -> true
  int isMonday = 0;
  int isRaining = 1;
  printf("%d \n", isMonday || isRaining); //1

  // c. if a number is greater than 9 & less than 100 -> true (2 digit number)
    // x > 9 && x < 100 -> it must be 2 digit number

  int x;
  printf("Enter Number: ");
  scanf("%d", &x);
  printf("%d \n", x > 9 && x < 100); 

  return 0;
}