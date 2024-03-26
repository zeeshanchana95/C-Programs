
/*

The arguments passed from command line are called command line arguments. These arguments are handled by main() function.

To support command line argument, you need to change the structure of main() function as given below.

int main(int argc, char *argv[] )  
Here, argc counts the number of arguments. It counts the file name as the first argument.

The argv[] contains the total number of arguments. The first argument is the file name always.

Compile and Run (windows)
Compile Program:
gcc filename.c

Run Program:
./a.exe arugmentName

*/


#include <stdio.h>  
void main(int argc, char *argv[] )  {  
  
   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2){  
      printf("No argument passed through command line.\n");  
   }  
   else{  
      printf("First argument is: %s\n", argv[1]);  
   }  
} 
