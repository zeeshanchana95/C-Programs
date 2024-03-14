
//C++ Tutorials:


//======================= UNIT 1: Basic Concepts =====================
//Basic Program
//printf()
//Variables
//Keywords
//Data Types
//Constants
//Comments
//Input and Output Statements
//Format Specifiers
//Program Structure
//Practice Questions



//Instructions for Running the Program:
    //1. open terminal
    //2. move to the location where the programs are located
    //3. to compile the program, run the commmand: gcc filname.c
    //4. to execute the program, run the command: ./a.exe if on windows and .\a.out if on mac or linux

    

//1. Hello World Program: use of printf 
#include<stdio.h>

int main() {
    //printf() used to print the string enclosed in ""
    printf("Hello world");

    return 0;
}

//Variables:
    //variable is the name of a memory location which stores some data.

#include<stdio.h>

int main() {
    //declare variable named age 
    //(Syntax: datatype nameOfVariable;)
    int age;

    //initialize variable named age
    //(Syntax: nameOfVariable = value;)
    age = 24;

    //declare and initialize variable named color at the same time
    //(Syntax: datatype nameOfVariable = value;)
    string color = "white";

    //declaring variable with other data types
    int number = 25;
    char star = '*';
    float height = 1.75;

    //update existing variable value
    age = 24;
   
    //Rules for Writing Variable Names:
        // a. Variables are case sensitive
            int a = 30;
            int A = 40;

        // b. 1st character is alphabet or '_'
            int _age = 22;
        
        // c. no comma/blank space
            int final_price = 100;
        
        // d. No other symbol other than
            // int final-price = 23; //error


    //Variable names should be meaningful and unique within the program
    int final_price = 100;



    return 0;
}



//Data Types:
    //data type tells which type of data you store in the memory
    //each data type specify the type of value to be stored and the memory size it will take or occupy in memory
    //there are many data types
        //  DATA TYPE (SIZE IN BYTES)
        // Char or signed char (1)
        // Unsigned char (1)
        // int or signed int (2)
        // Unsigned int (2)
        // Short int or Unsigned short int (2)
        // Signed short int (2)
        // Long int or Signed long int (4)
        // Unsigned long int (4)
        // float (4)
        // double (8)
        // Long double (8)
    //C LANGUAGE doesn't support boolean or string data type because I was came very early time, then c++, java, javascript, etc

#include<stdio.h>

int main() {

    //le'ts have a look at the most common data types

    int age = 22; //for storing whole numbers
    float pi = 3.142; //for storing values with decimal point
    char hashtag = '#'; //for storing special characters

    return 0;
}



//Contants:
  //LETS have a look at constants
    //constants are values that don't change (fixed)
        // we have 
            //integer constants: 1,2,3,0,-1,-2

            //real constants: 1.0, 2.0, 3.14, -2.4
            
            //character constants (need to be enclosed in single quotes): 'a', 'b', 'A', '#', '&'

#include<stdio.h>

int main() {

    return 0;
}



//Keywords:
//these are reserved words that have special meaning to the compiler and the meaning of these words can't be changed
//32 keywords in c 
//can't be used for variable names
  // auto
  // break
  // case
  // char
  // continue
  // do
  // default
  // const
  // double
  // else
  // enum
  // extern
  // for
  // if
  // goto
  // float
  // int
  // long
  // register
  // return
  // signed
  // static
  // sizeof
  // short
  // struct
  // switch
  // typedef
  // union
  // void
  // while
  // volatile
  // unsigned


#include<stdio.h>

int main() {

    
    return 0;
}



//Program Structure:


#include<stdio.h> //pre-processor directive
//always need to add above line 

//"main" is the main fuction, int is the return value type that main function will return

//function basically helps us to perform some task

//code inside "{}" is be executed when the function main is called

//every C program's starting point will be "main" function

// ; semicolon indicate the end of instruction

//C is a case-sensitive languages meaning "main" and "Main" are different things

int main() {

  printf("Hello World!");

  return 0;
}






//Comments:
  //lines that are not part of program
  //comments are of two types
    //1. single line:
      // use for commenting single line
      //use double forward slash //
    //2. multiple line:
      //use for commenting multiple lines
      //use /* */ 



#include<stdio.h> 

//this code displays how to print something to the scren  
int main() {

  printf("Hello World!");

  return 0;
}




//Output:
//use printf() function to print something to screen
//use printf("\n") function to print something to screen plus add newline at the end

#include<stdio.h> 
int main() {

  // printf("Hello World!\n");
  // printf("Hello World!\n");
  // printf("Hello World!\n");
  // printf("Hello World!\n");


  int age = 22;
  printf("Age is age\n"); //Age is age

  //There are some cases in C for Output:
    //CASES
      // 1 . integers (%d)
      // printf(" age is %d ", age);

      // 2. real numbers (%f)
      // printf(" value of pi is %f ",
      
      // 3. characters (%c)
      // printf("star looks like this %c star);

      //So, basically we need to use "format specifiers" to get the value from the variable to be used inside printf() function

      //printf() is the library function that comes with C library 

      printf("Age is %d\n", age);

      float pi = 3.14;
      printf("PI is %f\n", pi);

      char star = '*';
      printf("I am star %c\n", star); 

  return 0;
}





//Input:
//use "scanf()" to get input from user
//we also have different cases for getting input of different types
//Integer Format Specifier: scan("%d", &age); 
//Real Number Format Specifier: scan("%f", &pi); 
//Char Format Specifier: scan("%c", &star); 


#include<stdio.h> 
int main() {

  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  printf("age is: %d\n", age);

  return 0;
}






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





// Practice Qs 1
// 1 . Write a program to calculate area of a square.
// (side is given)

#include<stdio.h>
int main() {
  
  // int side = 3;
  // int areaOfSquare = side * side;
  // printf("Area of square %d", areaOfSquare);

  // int side;
  // printf("Enter side: ");
  // scanf("%d", &side);
  // printf("Are of square is: %d", side * side);

  float side;
  printf("Enter side: ");
  scanf("%f", &side);
  printf("Area of square is: %f", side*side);

  return 0;
}




// Practice Qs 2
// Write a program to calculate area of a circle.
// (side is given)

#include<stdio.h>
int main() {

  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Area of circle is: %f", 3.142*radius*radius);

  return 0;
}

// HOMEWORK SET
// a. Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.
// b. Take a number(n) from user & output its cube(n*n*n).
// c. Write comments for programs a & b.
// d. temperature conversion from fahrenheit to celsius or vice versa.
// e. calculate interest using given formula
// f. calculate compound interest.
// g. calculate area of triangle, rectangle, etc.


//======================= END of UNIT 1: Basic Concepts =====================



//============ UNIT 02: Instruction and Operators ===================
//1. What are Instructions in C, and its Types?




//Instructions:
  //these are statements in the program
  //they are of three types: all of them have different functions to do and that's how they named accordingly
    //1. Type Declaration Instructions
    //2. Arithmetic Instructions
    //3. Control Instructions

//1. type declaration instructions
  //instructions where there is a need to declaring variables with its types i.e., int a = 2;
  //there is a RULE while declaring instructions: DECLARE VARIABLE BEFORE USING IT.

//Examples:
  // VALID
  // int a = 22;
  // int b = a;
  // int c=b+l;
  // int d=l,e;

  // int a,b,c;
  // a=b=c = 1

  // INVALID
  // int a = 22
  // int b = a
  // int c= b +2
  // int d=2, e


#include <stdio.h>
int main() {

  int a = 22;
  int b = a;
  int c = b * 6;
  int d = 1, e;

  int oldAge = 22;
  int years = 2;
  int newAge = oldAge + years;


  //if declaring multiple variables, you need to first declare them all and then initialize them at a time

  //correct
  int a,b,c;
  a = b = c = 1;
  
  // int x = y = z = 4; //error



  return 0;

}




//2. Arithmetic Instructions (+, -, *, /, %)
  //instructions which has operands and operators are called arithmetic operations

  //we have "operands -> values on which operations being performed like a = 2" and "operators -> operation to perform like +"
  
  //NOTE: there must a single variable on the Left Hand Side to get the result of operation being performed becuase variables on the left are being assigned by values from the right side 


  

#include <stdio.h>
#include <math.h>

int main() {

  int a = 1, b = 2;

  int sum = a + b;
  int multiply = a * b;
  int x,y = a*b; //NOTE: y assigned value but x is declared only


  //valid instructions:
  a = b + c;
  a = b * c;
  a = b / c;


  //invalid instructions
  b + c = a;
  a = bc;
  a = b ^ c; //^ is used for XOR operation (bitwise operation)

//NOTE: pow(x,y) for x to the power of y
//pow(b,c) = b^c
printf("%d", a);



//Modular Operator: 
  //return remainder for int 
  //use % for mudular operator

  //two cases for integer values:
    //positive numerator: return positive remainder
    //negative numerator: return negative remainder

  //Examples:
  // 3 % 2 = 1
  // -3 % 2 = -1
  // 4 % 2 = 0;
  //5 % 3 = 2;
  
  printf("%d", 16%10); //return 6

  // modular opertor doesn't work on float values
  printf("%d", 1.6%1.0); //error: 



return 0;

}















//2. Arithmetic Instructions

  //TYPE CONVERSION:
    //if operands are of same type -> get result of same type
      // int op int -> int (2 * 2 -> 4)
      // float op float -> float (2.0 * 2.0 -> 4.0)

    //if operands are of differnet type -> get result of differnet type

      // int op float -> float (2.0 * 2 -> 4.0)
      // float op double -> double


    //Practic Question:
      //Solve:
      int a = 1.999999; //Warning: implicit conversion from double to int

    //Basically there are 2 types of conversions:
    //1. Implicit conversion
      //- do compiler itself
      //says smaller types can be converted into bigger types like
        //int -> int
        //int -> double
        //BUT
        //float -> int (not possible automatically)
        //double -> int (not possible automatically)
        
        //we need to tell the compiler to convert explicitly, like
          //int a = (int) 1.999999;



    //2. Explicit conversion
      //- do by ourselves but not by compiler

  //OPERATOR PRECEDENCE:
    //precedence means priority
    //one at the top has higher precedence than the other at the bottom
    //higher precedence means higher priority
    
      // *, /, %
      // +, -
      // = 
      
      //Example: Operation of Different Precedence
        // //correct
        // x = 4 + 9 * 10;
        // x = 4 + 90
        // x = 94

        // //wrong
        // x = 4 + 9 * 10;
        // x = 13 * 10;
        // x = 130

      //Example: Operation of Same Precedence
        //come associativily rules for same precedence
          //perform operations from left to right
            // x = 4 * 3 / 6 * 2;
            // x = 12 / 6 * 2;
            // x = 2 * 2
            // x = 4

            //OR
             //x = ((4 * 3) / 6) * 2

    //Practice Qs 4
      //a. 5 * 2 - 2 * 3  => 10 - 6 => 4


      //b. 5 * 2 / 2*3 => 10 / 2 * 3 => 5 * 3 => 15
      
      
      //c. 5 * (2 / 2) * 3 => 5 * (1) * 3 => 5 * 1 * 3 => 5 * 3 => 15


      //d. 5 + 2 / 2 * 3 => (5 + ((2/2) * 3)) =>  5 + ((1) * 3) => 5 + 3 => 8







#include <stdio.h>
int main() {

  // printf("%d\n", 2 * 2); //4
  // printf("%f\n", 2.0 * 2.0); //4.0

  // printf("%f\n", 2.0 * 2); //4.0000000

  // printf("%d\n", 2 / 3); //0 becuase int (2) op int (3) -> int (0.666667 -> 0)

  // int a = 1.999999; 
  // printf("%d\n", a); //warning

  // int b = (int) 1.999999; //forcefully convert to int
  // printf("%d\n", b); //1

  // int a = 4 * 3 / 6 * 2;
  // printf("%d\n", a);
  
  // int a = 5 * 2 - 2 * 3;
  // printf("%d\n", a);

  // int a = 5 * 2 / 2*3;
  // printf("%d\n", a);

  // int a =  5 * (2 / 2) * 3;
  // printf("%d\n", a);

  int a =   5 + 2 / 2 * 3;
  printf("%d\n", a);

  return 0;

}