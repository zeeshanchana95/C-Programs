
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




// Control Instructions
  // Used to determine flow of program or change the normal flow of executing instructions
  //are of 4 types
  // a. Sequence Control
    //- run sequence wise - one by one

  // b. Decision Control
    //- if-else instructions which decide which block of statements to execute based upon the condition
  
  // c. Loop Control
    //- learn the use of different loops for task that need to be performed repetitively
  
  // d. Case Control
    //- perform certain actions based upon cases defined, use switch statement with different cases

// Operators:
  //a. Arithmetic Operators
    // - used to perform arithmetic operations using operators like +, -, * , /, %

  //b. Relational Operators
    // - used to the relation between two operands like >, <, >=, <=, ==, !=

  //c. Logical Operators
    // - used to perform logical operations using logical operators like &&, ||

  //d. Bitwise Operators
    // - used to perform operations on individual bits

  //e. Assign Operators
    // - use to perform assignment operations like +=, -+, *=, /=, %=

  //f. Ternary Operator ?:
    // - also called conditional operator, normally used to assign value of depending upon condition


#include <stdio.h>

int main() {

  
    
  return 0;
}




// Control Instructions
  // Used to determine flow of program or change the normal flow of executing instructions
  //are of 4 types
  // a. Sequence Control
    //- run sequence wise - one by one

  // b. Decision Control
    //- if-else instructions which decide which block of statements to execute based upon the condition
  
  // c. Loop Control
    //- learn the use of different loops for task that need to be performed repetitively
  
  // d. Case Control
    //- perform certain actions based upon cases defined, use switch statement with different cases

// Operators:
  //a. Arithmetic Operators
    // - used to perform arithmetic operations using operators like +, -, * , /, %

  //b. Relational Operators
    // - used to the relation between two operands like >, <, >=, <=, ==, !=

  //c. Logical Operators
    // - used to perform logical operations using logical operators like &&, ||

  //d. Bitwise Operators
    // - used to perform operations on individual bits

  //e. Assign Operators
    // - use to perform assignment operations like +=, -+, *=, /=, %=

  //f. Ternary Operator ?:
    // - also called conditional operator, normally used to assign value of depending upon condition



//RELATIONAL OPERATORS:
  // <, >,, less than, greater than 
  //<=, >=, less that or equal to, greater than or equal to
  //==, != for equality or inequality

  // NOTE:  if return values is 2,3,4,5,6,7, -1, -5 means true otherwise false for 0


// LOGICAL OPERATORS:
  // when more than one condition need to be checked at the same time, we use logical operators

  // we have different local operators
  // && means AND -> return true (1) when all both conditions are true
  // || means OR -> return true (1) when atleast one condition is true
  // ! means NOT -> used to reverse the result of condition or reverse the returned value of condition like true from false and vice versa


  //OPERATOR PRECEDENCE:
    // Priority            Operator
    //   1                      !
    //   2                    *,/,%
    //   3                     +,-
    //   4                 <, <=, >, >=
    //   5                    ==, !=
    //   6                     &&
    //   7                     ||
    //   8                      =

// Assignment Operators (Shorthand Operators):
  // =
  // +=
  // -=
  // *=
  // /=
  // %=

#include <stdio.h>

int main() {

  //Relational Operators
  printf("%d \n", 4 == 4); //return 1 means true.
  printf("%d \n", 4 == 2); //return 0 means false.
  printf("%d \n", 4 > 2); //1
  printf("%d \n", 4 < 2); //0
  printf("%d \n", 4 >= 2); //1
  printf("%d \n", 4 <= 2); //0
  printf("%d \n", 4 != 2); //1
  

  //Logical Operators
  printf("%d \n", 3 > 4 && 5 > 2); //0
  printf("%d \n", 3 > 4 || 5 > 2); //1
  printf("%d \n", !(3>2)); //0
  printf("%d \n", !((5 > 1 ) && (3 > 4))); //1

  //Assignment Operators
  int a = 1;
  int b = 4;
  // a = a + b;
  a += b;
  printf("%d \n",a);
  a *= b;
  printf("%d \n",a);
  a -= b;
  printf("%d \n",a);
  a /= b;
  printf("%d \n",a);
  a %= b;
  printf("%d \n",a);


  return 0;
}


// Practice Qs 5
  // Write a program to check if a number is divided by 2 or not.

#include<stdio.h>

int main() {
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("%d ", x%2 == 0);

  return 0;
}



// Practice Qs 6
  // Write a program to tell if it is even or odd.

#include<stdio.h>

int main() {
  //even -> 1
  // odd -> 0
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("%d ", x % 2 == 0);


  return 0;
}



// Practice Qs 7
  // Are the following valid or not?
  // a. int a = 8^8; -> valid
  // b. int x; int y = x; -> valid
  // c. int x, y = x; //invalid
  // d. char stars = '**'

#include<stdio.h>

int main() {
 
  printf("%d ", 8 ^ 8); //valid //0 (XOR Operator)
  
  int x; int y = x; //valid
  int x, int y = x; //invlaid
  char stars = '**' //warning: declared multi-character constants, conversion from char to int
  


  return 0;
}




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

// HOMEWORK SET
// a. Write a program to print the average of 3 numbers.
// b. Write a program to check if given character is digit
// or not.
// c. Write a program to print the smallest number,

  // a. Write a program to print the average of 3 numbers.
  #include<stdio.h>

  int main() {

    int a = 1;
    int b = 2;
    int c = 3;

    float average = a + b + c / 3;
    printf("The average of 3 numbers is %f\n", average);

    return 0;
  }




  // b. Write a program to check if given character is digit or not.
  #include<stdio.h>

  int main() {
    char character;
    printf("Enter character: ");
    scanf("%c, ", character);
    
    if(character == '0' || character == '1' || character == '2' || character == '3 ' || character == '4' || character == '5' || character == '6' || character == '7' || character == '8' || character == '9') {
      printf("Character is digit");
    }
    else {
      printf("character is non digit");
    }

    return 0;
  }





//CONDITIONAL OPERATORS:

//CONDITIONAL OPERATORS:
  // - used to perform actions based upon certain conditions
  // - learn two types of conditional statements
    //1. if-else
    //2. swtich

  //Syntax: if-else
   /*
    if(Condition) { //condition can be like marks > 90 && marks < 95
      //do something if condition is TRUE
      //execute block of code
    }
    else {
      //do something if condition is FALSE
    }
  
  NOTE: code inside {} is called block of code
  */
  
#include <stdio.h>

int main() {

  int age;
  printf("Enter age: ");
  scanf("%d, ", &age);

  //use {} to execute block of code (more than one statement)
  if(age > 18) {
    printf("adult \n");
    printf("they can drive \n");
    printf("they can vote \n");
  }
  else {
    printf("non-adult \n");
  }

  printf("Thank you. \n");

  //if there is only one statement to execute if condition is true or false, then we don't need to insert {} curly brackets
  if(age > 18) 
    printf("adult \n");
  else
    printf("non-adult \n");

  printf("Thank you. \n");

 
 //if add more than one statement and don't insert curly brackets, it will throw an error
  if (age > 18)
    printf("adult Xn");

  printf("can vote\n");

  else
    printf("not adult Xn");

  return 0;

}






//CONDITIONAL OPERATORS:
  // - used to perform actions based upon certain conditions
  // - learn two types of conditional statements
    //1. if-else
    //2. swtich

  //Syntax: if-else
   /*
    if(Condition) { //condition can be like marks > 90 && marks < 95
      //do something if condition is TRUE
      //execute block of code
    }
    else {
      //do something if condition is FALSE
    }
  
  NOTE: code inside {} is called block of code
  */

  //use if-else if-else when check more than one condition like if first if's condition is false, check else if condition and if that also fails, then execute else block of code
  //Syntax:
   /*
    if (condition1) {
      //execute block of code if condition1 is TRUE
    }
    else if(condition2) {
      //execute block of code if condition2 is TRUE and condition1 is FALSE
    }
    else if(condition3) {
      //execute block of code if condition3 is TRUE and condition1 and condition2 are false
    }
    else {
      //execute block of code if all condition fails
    }
  */

  //if you want to check later conditions even earlier condition(s) are true then use multipel ifs
  //syntax:
  /*
  if(condition1) {
    //execute block of code if condition1 is TRUE
  }
  if(condition2) {
    //execute block of code if condition2 is TRUE
  }
  if(condition3) {
    //execute block of code if condition3 is TRUE
  }
  else {
    //execute block of code if all condition fails
  }
  */

#include <stdio.h>

int main() {

  int age;
  printf("Enter age: ");
  scanf("%d, ", &age);

  if(age >= 18) {
    printf("adult \n");
  }
  else if(age > 13 && age < 18) {
    printf("teenager \n");
  }
  else {
    printf("child \n");
  }


  return 0;

}











//CONDITIONAL OPERATORS:
  //Ternary Operator:
  // Condition ? doSomething if TRUE :  doSomething if FALSE

  //use inplace of if-else statement to keep code shorter in single line

  //if condition is true then run statement after ? otherwise statements after : will run

  

#include <stdio.h>

int main() {

  int age;
  printf("enter age: ");
  scanf("%d", &age);

  age >= 0 ? printf("adult \n") : printf("not adult \n");
  //note: you must not insert ; after the end of statement after ? 

  return 0;

}




//CONDITIONAL OPERATORS:
  //switch statement:
    //it will match number or character and list down cases, if any one of the cases match, it will execute those statements inside that case can continue checking other cases untill and unless it get "break" statement. if it  fails to match any cases, then run default case statements.

    

    //syntax:
    //for number matching
    /*
    switch
      switch(number) {
        case 1: //do something
        break;
      case 2 : //do something
        break;
      default : //do something
    }
    */

    //for character matching
    /*
    switch
      switch(character) {
        case 'a': //do something
        break;
      case 'b' : //do something
        break;
      default : //do something
    }
    */

    //"break" helps to get out from switch statement. So, in order to get out from switch statement, you need to you "break" statement after case execution otherwise it will keep checking other cases.

#include <stdio.h>

int main() {

  int day; //1-mon; 2-tues; 3-wed and so on.
  printf("Enter day (1-7): ");
  scanf("%d", &day);
  
  switch (day) {
    case 1: 
      printf("Monday");
      break;
    case 2: 
      printf("Tuesday");
      break;
    case 3: 
      printf("Wednesday");
      break;
    case 4: 
      printf("Thursday");
      break;
    case 5: 
      printf("Friday");
      break;
    case 6: 
      printf("Saturday");
      break;
    case 7: 
      printf("Sunday");
      break;
    default: 
      printf("not a valid day! \n");
  }

  return 0;

}











//CONDITIONAL OPERATORS:
  //switch statement:
    //it will match number or character and list down cases, if any one of the cases match, it will execute those statements inside that case can continue checking other cases untill and unless it get "break" statement. if it  fails to match any cases, then run default case statements.

    

    //syntax:
    //for number matching
    /*
    switch
      switch(number) {
        case 1: //do something
        break;
      case 2 : //do something
        break;
      default : //do something
    }
    */

    //for character matching
    /*
    switch
      switch(character) {
        case 'a': //do something
        break;
      case 'b' : //do something
        break;
      default : //do something
    }
    */

    //"break" helps to get out from switch statement. So, in order to get out from switch statement, you need to you "break" statement after case execution otherwise it will keep checking other cases.

    // switch Properties
    //   a. Cases can be in any order
    //   b. Nested switch (switch inside switch) are allowed
      //Syntax:
      /*
        switch(condition) {
          case 1:
            //run statement if condition match with case 1
            swtich(condition2) {
              case 1:
              //run statement if condition1 and condition2 are true plus condition2 match with case1
              break;
              case 2:
                break;
              case 3:
                break;
              
            }
            break;
          case 2:
            break;
          default:

        }
        */

    //NOTE: we can also make nested ifs (one if statement inside another if statement)
      //Syntax:
      /*
        if(condition1) {
          // run when condition1 is true
          if(condition2) {
            //run when condition1 and condition2 are true
          }
        }
      */

#include <stdio.h>

int main() {

  char day; //m-mon; t-tues; w-wed; T-thur; f-Fri; s-Sat; S-Sun.
  printf("Enter day (1-7): ");
  scanf("%s", &day);
  
  switch (day) {
     case 'T': 
      printf("Thursday");
      break;
    case 'f': 
      printf("Friday");
      break;
    case 's': 
      printf("Saturday");
      break;
    case 'm': 
      printf("Monday");
      break;
    case 't': 
      printf("Tuesday");
      break;
    case 'w': 
      printf("Wednesday");
      break;
   
    case 'S': 
      printf("Sunday");
      break;
    default: 
      printf("not a valid day! \n");
  }

  return 0;

}





//CONDITIONAL OPERATORS:
    //NOTE: we can also make nested ifs (one if statement inside another if statement)
      //Syntax:
      /*
        if(condition1) {
          // run when condition1 is true
          if(condition2) {
            //run when condition1 and condition2 are true
          }
        }
      */

#include <stdio.h>

int main() {

  //nested ifs example
  int number;
  printf("enter number: ");
  scanf("%d", &number);

  if(number >= 0) {
    printf("positive number \n");

    if(number %2 == 0) {
      printf("even number \n");
    } else {
      printf("odd number \n");
    }
  }
  else {
    printf("negative number \n");
  }
  return 0;

}





// Practice Qs 9
// Write a program to check if a student passed or failed.
// marks > 30 is PASS
// marks <= 30 is FAIL

#include <stdio.h>

int main() {

  //using if-else if-else
  int marks;
  printf("Enter marks (0-100): ");
  scanf("%d", &marks);

  if(marks >= 0 && marks <= 30) {
    printf("FAIL \n");
  } else if(marks > 30 && marks <= 100) {
    printf("PASS \n");
  }
  else { 
    printf("Invalid Marks\n");
  }
  
  return 0;
}




// Practice Qs 9
// Write a program to check if a student passed or failed.
// marks > 30 is PASS
// marks <= 30 is FAIL

#include <stdio.h>

int main() {

  //using ternary operator
  int marks;
  printf("Enter marks (0-100): ");
  scanf("%d", &marks);

  //simple version 
  // marks <= 30 ? printf("Fail"); : printf("Pass");
  
  // advanced version
  marks >= 0 && marks <= 30 ? printf("Fail") 
  : marks > 30 && marks <= 100 ? printf("Pass") 
  : printf("Invalid Marks");

  return 0;
}






// Practice Qs IO
// Write a Program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70<= marks < 90 is A
// 90 marks 100 is A+

#include <stdio.h>

int main() {

  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);
  if (marks < 30) {
    printf("C \n");
  } else if( marks >= 30 && marks < 70){
    printf("B \n");
  } else if (marks >= 70 && marks <= 90) {
    printf("A \n");
  } else  {
    printf("A+ \n");
  }

  return 0;
}




// Practice Qs 1 1
// Will this code :
// a. give error
// b. print "x is equal to 1"
// c. print "x is not equal to 1 "


#include <stdio.h>

int main() {

  int x = 2;
  if(x=4) {
    printf("x is equal to 1\n");
    printf("%d \n", x);
  }
  else {
    printf("x is not equal to 1");
  }
  
  return 0;

}


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





//CHAPTER 04: LOOP CONTROL INSTRUCTION
  //use loops to repeat some parts of the program
  //for, while, do-while, break, continue keywords
  
  //used for doing repetitive tasks, use loops there
  //instructions executed repetitively are called loop control instructions
  //
  //three are three types of loops:
    //1. for
    //2. while
    //3. do while
  //same task can be done using all loops mentioned above

  /*
  for loop Syntax:
  for(initialisation; condition; updation) {
    //do something
  }
  */

#include<stdio.h>

int main() {

  //for loop
  // for(int i = 1; i<=100; i = i + 1) {
  //   printf("Hello, world\n");
  // }

  // i is called counter variable or iterator which helps doing some task repeatedly
  for(int i = 10; i >= 1; i = i - 1) {
    printf("%d \n", i);
  }

  return 0;
}





//CHAPTER 04: LOOP CONTROL INSTRUCTION
//for loop

//   Practice Qs 13
  // Qs. Print the Numbers from O to IO
  // 012345678910

#include<stdio.h>

int main() {

  for(int i=0; i<=10; i++){
    printf("%d \n", i);
  }

  return 0;
}





//CHAPTER 04: LOOP CONTROL INSTRUCTION
//   Special Things
// - Increment Operator
// - Decrement Operator
// - Loop counter can be float or even character
// - Infinite Loop

//increement or decreement operator
#include<stdio.h>

int main() {
  
  // i++ (post increment) -> use, then increase
  int i = 1;
  printf("%d\n", i++);
  printf("%d\n", i);
  
  // ++i (pre-increement) -> increase, then use
  int j = 1;
  printf("%d\n", ++j);
  printf("%d\n", j);

  //NOTE: same as the case for decrement
  //post decrement operator
  int i = 1;
  printf("%d\n", i--);
  printf("%d\n", i);
  
  //pre-decrement operator
  int i = 1;
  printf("%d\n", --i);
  printf("%d\n", i);

  return 0;
}


// - Loop counter can be float or even character
#include<stdio.h>

int main() {
 
  for(float i=1.0; i<=5.0; i++) {
    printf("%f \n", i);
  }

  for(char ch='a'; ch <= 'z'; ch++) {
    printf("%c \n", ch);
  }

  return 0;
}



// - Infinite Loop: 
  //loop that run infinitely
  //create loop by ommiting condition part in for loop or write "true" in condition place

#include<stdio.h>

int main() {
 
 for(int i=1;; i++ ) {
  printf("Hello World!\n");
 }
 for(int i=1; true; i++ ) {
  printf("Hello World!\n");
 }

  return 0;
}

//NOTE: always keep in mind that you must specify condition in loop so that they don't end up run infinitely



//CHAPTER 04: LOOP CONTROL INSTRUCTION
  //while loop
  /*
    while(condition) {
      //do something
    }
  */


#include<stdio.h>

int main() {
 
 int i=1;
 while(i<10) {
  printf("%d\n", i);
  i++;
 }

  return 0;
}




//CHAPTER 04: LOOP CONTROL INSTRUCTION
  //while loop
  /*
    while(condition) {
      //do something
    }
  */


// Practice Qs 14
// Print the numbers from O to n, if n is given by user

#include<stdio.h>

int main() {
 
 int number;
 int i = 0;
 printf("enter number: ");
 scanf("%d", &number);
 
 while(i <= number) {
  printf("%d\n", i);
  i++;
 }

  return 0;
}




 //do-while loop

 /*
  do {
    //do something
  } while(condition);
 */ 

#include<stdio.h>

int main() {
 
 int number;
 int i = 0;
 printf("enter number: ");
 scanf("%d", &number);
 
 do {
  printf("%d\n", i);
  i++;
 }
 while(i <= number); 

  return 0;
}



//CHAPTER 04: LOOP CONTROL INSTRUCTION
//  Practice Qs 15
  // Print the Sum of First n Natural Numbers.
  // Also, print them in reverse.
 
#include<stdio.h>

int main() {
 
 int number;
 int i = 1;
 int sum;
 printf("enter number: ");
 scanf("%d", &number);
 
 do {
  sum +=i;
  i++;
 }
 while(i <= number); 

 printf("Sum of first %d numbers is %d\n",number, sum);

  for(int i=number; i>=1; i--) {
    printf("%d \n",i);
  }
  return 0;
}

//version 2
#include<stdio.h>

int main() {
  int n;
  printf("enter number :");
  scanf("%d", &n);

  int sum = 0;
  for(int i=1, j=n; i<=n && j>=1; i++, j--) {
    sum = sum + i; // sum += i
    printf("%d \n",j);
  }

  printf("sum is %d \n",sum);
  return 0;
}


//version 3
 
#include<stdio.h>

int main() {
  int n;
  printf("enter number :");
  scanf("%d", &n);

  int sum = 0;
  for(int j=n; j>=1; j--) {
    sum = sum + j; 
    printf("%d \n",j) ;
  }

  printf("sum is %d \n",sum);
  return 0;
}



//CHAPTER 04: LOOP CONTROL INSTRUCTION

//Print the table of a number input by the user

#include<stdio.h>

int main() {
  int number;
  printf("enter number :");
  scanf("%d", &number);

  for(int i=1; i<=10; i++) {
    printf("%d X %d = %d\n",i, number, i * number);
  }
  return 0;
}






//CHAPTER 04: LOOP CONTROL INSTRUCTION

//break statement
  //used in switch to take out from switch
  // exit from loop 
  // take you from inner loop to outer loop if loops are nested
  

#include<stdio.h>

int main() {
  
  for(int i=1; i<=5; i++) {
    if(i==3) {
      break;
      //exit from loop when i equals to 3
    }
    printf("%d \n", i);
  }
  
  printf("end");

  return 0;
}




//CHAPTER 04: LOOP CONTROL INSTRUCTION

//break statement
  //   Practice Qs 17
  // Keep taking numbers as input from user
  // until user enters an odd number.

#include<stdio.h>

int main() {
  
  int number;
  while(1) {
    printf("Enter number: ");
    scanf("%d", &number);

    if(number %2 != 0 ) {
      printf("Number entered %d is odd \n", number);
      break;
    }
    else {
      printf("Number entered %d is even\n", number);
    }
  }

  printf("Thank you.")

  return 0;
}



//CHAPTER 04: LOOP CONTROL INSTRUCTION

//break statement

// Practice Qs 18
// Keep taking numbers as input from user until
// user enters a number which is multiple of 7.

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





//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    //skip to the next iteration and leaving remaining statements unexected wherever used of current iteration
    
    //reverse of break statement function
    
    //it says leave the current iteration's remaining statements and continue to the next iteration

#include<stdio.h>
int main() {
  
  for(int i = 1; i <= 5; i++) {
    if(i == 3) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}




//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    // Practice Qs 19
    // Print all numbers from 1 to IO except for 6.


#include<stdio.h>
int main() {
  
  for(int i = 1; i <= 10; i++) {
    if(i == 6) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}





//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    // Practice Qs 20
    // Print all the odd numbers from 5 to 50.

#include<stdio.h>
int main() {
  
  for(int i = 5; i <= 50; i++) {
    if(i %2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}





//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    // Practice Qs 21
    // Print the factorial of a number n.

#include<stdio.h>
int main() {
  
  int n;
  printf("Enter number: ");
  scanf("%d", &n);

  int factorial = n;
  for(int i = n; i >= 1; i--) {
    if(i==n) {
      continue;
    }
    factorial = factorial * i;
  }
    printf("Factorial of number %d is %d\n", n, factorial);

  return 0;
}

//version 2
#include<stdio.h>
int main() {
  int n;
  printf("enter number : " ) ;
  scanf("%d", &n);
  
  int fact = 1;
  for (int i=1; i<=n; i++) {
    fact = fact * i;
  }
  
  printf("final factorial is %d", fact );
  
  return 0;
}





//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    // Practice Qs 22
    // Print reverse of the table for a number n.

#include<stdio.h>
int main() {
  
  int n;
  printf("Enter number: ");
  scanf("%d", &n);

  for(int i = 10; i >= 1; i--) {
    printf("%d X %d  = %d\n", i, n, i*n);
  }

  return 0;
}



//CHAPTER 04: LOOP CONTROL INSTRUCTION

  //continue statement
    // Practice Qs 23
    // Calculate the sum of all numbers between 5 and 50.(including 5 & 50)

#include<stdio.h>
int main() {

  int sum = 0;
  for(int i = 5; i <= 50 ; i++) {
    sum += i;
  }
  printf("Sum is %d", sum);

  return 0;
}





//CHAPTER 05: Function and Recursion
  //functions
    //a part of code to do some task
    //take input, do task, and return result or output
    //its like buttons of remote

    //block of code that performs particular task
    //take argument -> do work -> return result
    //functions can be used multiple times
    //it increases code resusability

    //if same code is needed atleast three places in, then it is better to make function from it and use on other places

    //function is represented by "name" with () brackets like "printf()"

    // Syntax 1
    // Function Prototype/function declaration
      // void printHello();  //tell the compiler that we are writing function

        //"void" means function will not return anything or value


    // Syntax 2
    // Function Definition: define work to do
      // void printHello() {
      //  printf("Hello");
      //}

    //Syntax 3
    //function call: use the defined function
      // int main () {
      //   printf();
      //   return 0;
      // }

    //main() is also a function 

    //main benefit of function is that no matter how many times we change function implementation, function calling will remain same like we don't need to go at each place and modify function calling





#include<stdio.h>

//function declaration/prototyping
void printHello();

int main() {

  //function calling
  printHello();
  printHello();
  printHello();

  return 0;
}

//function definition/implementation
void printHello() {
  printf("Hello\n");
  printf("My name is Zeeshan \n");
} 


//CHAPTER 05: Function and Recursion
  //functions

  // Practice Qs 27
  // Write 2 functions - one to print "Hello" & second to print "good bye".
   
#include<stdio.h>

void printHello();
void printGoodbye();

int main() {

  printHello();
  printGoodbye();

  return 0;
}

void printHello() {
  printf("Hello\n");
}

void printGoodbye() {
  printf("Goodbye\n");
}




//CHAPTER 05: Function and Recursion
  //functions
  // Practice Qs 28
  // Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

   
#include<stdio.h>

void printNamaste();
void printBonjour();

int main() {

  printf("Enter f for French & i for Indian: ");
  char choice;
  scanf("%c", &choice);
  if(choice == 'i') {
    printNamaste();
  }
  else {
    printBonjour();
  }

  return 0;
}

void printNamaste() {
  printf("Namaste\n");
}

void printBonjour() {
  printf("Bongour\n");
}









//CHAPTER 05: Function and Recursion
  //function properties:
    //1. execution always starts from main function
    //2. a function gets called directly or indireclty from main

#include<stdio.h>

//3. there can be multiple functions in a program
void printNamaste();
void printBonjour();

//1. execution always starts from main function
int main() {

//2. a function gets called directly or indireclty from main
  printf("Enter f for French & i for Indian: ");
  char choice;
  scanf("%c", &choice);
  if(choice == 'i') {
    printNamaste();
  }
  else {
    printBonjour();
  }

  return 0;
}

void printNamaste() {
  printf("Namaste\n");
}

void printBonjour() {
  printf("Bongour\n");
}





//CHAPTER 05: Function Types
  //Function Types:
    //1. Library Functions
      //- specific functions in-built in C, need to add library in order to use in-built function
      //- Example: scanf(), printf()

    //2. User-defined Functions
      //- declared & defined by programmer 



//CHAPTER 05: Function Types
  //Passing Arguments:
   //functions can take value (called parameter) & give some value (called argument)

// Passing Arguments
  // void printHello( )
  // void printTable(int n);
  // int sum(int a, int b);

#include<stdio.h>

int sum(int a, int b);

int main() {

  int a,b
  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  int s = sum(a,b);
  printf("The sum of %d and %d is %d\n", a, b, s);
  
  return 0;
}

int sum(int a, int b){
  return a+b;
}








//CHAPTER 05: Function

  //Arguments vs Parameters

  //Arguments
    //values that are passed in function call
    //used to send value
    //actual paramete

  //Parameters
    //values in function declaration & definition
    //used to receive value
    //format parameter



//CHAPTER 05: Function
  
  // NOTE: 
  // a. Function can only return one value at a time
  // b. Changes to parameters in function don't change the values in calling function.
    // Because a copy of argument is passed to the function [called that process Pass by Value]

#include<stdio.h>

void calculatePrice( float value) ;

int main() {
  float value = 100.0;
  calculatePrice(value);
  printf("Values is %f\n", value);
  return 0;

}

void calculatePrice( float value) {
  value = value + (0.18 * value);
  printf("final price is : %f\n", value);
}




//CHAPTER 05: Function
  
//   Practice Qs 29
  // Use library functions to calculate the square of a number given by user.

#include<stdio.h>
#include<math.h>

int main() {

  float number;
  printf("Enter a number: ");
  scanf("%f", &number);

  printf("The square of %f is %f\n", number, pow(number, 2));

  
  return 0;
}







//CHAPTER 05: Function
  // Practice Qs 31
  // Write functions to calculate area of a square, a circle & a rectangle.

#include<stdio.h>
#include<math.h>

int main() {

  float areaOfSquare = 0, areaOfCircle = 0, areaOfRectangle = 0;
  float radius;
  float length;
  float width;
  float sideLength;

  printf("Enter the radius of a circle: ");
  scanf("%f", &radius);
  area = M_PI * radius * radius;  
  printf("The area of a circle with radius %f is %f\n", radius, area);


  printf("Enter the length and width of a rectangle: ");
  scanf("%f %f", &length, &width);
  area = length * width;
  printf("The area of a rectangle with length %f and width %f is %f\n", length, width, area);
  
  printf("Enter the length for square");
  scanf("%f", &sideLength);
  area = sideLength * sideLength;
  printf("The area of a square with length %f is %f\n", sideLength, area);


  return 0;
}







//CHAPTER 05: Recursion:
  //we know that one function can call another function but

  //when a funciton calls itself, it's called recursion

  //in programming, any task that can be done using loops, can also be done using recursion



// Practice Qs 32
  // Print "Hello World" 5 times using recursion.

#include<stdio.h>

void printHelloWorld(int count);

int main() {
  printHelloWorld(5);
  return 0;
}

//recursive function
void printHelloWorld(int count) {
  if(count == 0) {
    return;
  }
  printf("Hello World\n ");
  printHelloWorld(count - 1);
}






//CHAPTER 05: Recursion using Math
  //f(x) = x^2
  //f(f(x)) for x = 2; here f(x) is recursive function

  //Normal Function Call:
    // main() -> function1() -> function2()
    //and then return value from
    //function2() -> function1() -> main()


  //Recursion Function Call
    //main() -> function1()  -> function1()
    //and then return value from
    //function1() -> function1() -> function1() -> main()






//CHAPTER 05: Recursion using Math

// Practice Qs 30
// Sum of first n natural numbers.

//1 + 2 + 3 + 4 + ................ n - 1 + n --> sum (n - 1) + n
//Example: sum of first 5 numbers

//demo:
 //n = 5 -> 1 + 2 + 3 + 4 + 5 --> sum (4) + 5
 //n = 4 -> 1 + 2 + 3 + 4 --> sum (3) + 4
 //n = 3 -> 1 + 2 + 3 --> sum(2) + 3 
 //n = 2 -> 1 + 2 --> sum (n - 1) + 2
 //n = 1 -> 1 (base case where recursion stop calling itself and start back tracking)
 

#include<stdio.h>

int sum (int n);

int main() {

  int s = sum(5);
  printf("Sum of first 5 natural numbers: %d\n", s);
  return 0;
}

//recursive function
int sum (int n) {
  if(n == 1) { 
    return 1;
  }
  int sumNm1 = sum(n  - 1);
  int sumN = sumNm1 + n;
  return sumN;
}





//CHAPTER 05: Recursion using Math

// Practice Qs 31
//Factorial of n.
  //5! = 1 x 2 x 3 x 4 x 5 --> 4! x 5
  //4! = 1 x 2 x 3 x 4 --> 3! x 4
  //3! = 1 x 2 x 3 --> 3! x 4
  //2! = 1 x 2 --> 2! x 3
  //1! = 1 --> 1! x 2

  //So, fact(n) = fact(n - 1) x n;
 

#include<stdio.h>

int fact (int n);

int main() {

  int s = fact(5);
  printf("Factorial of first n: %d\n", s);
  return 0;
}

//recursive function
int fact (int n) {
  if(n == 0) { 
    return 1;
  }
  int factNm1 = fact(n - 1);
  int factN = factNm1 * n;
  return factN;
}



//CHAPTER 05: Recursion using Math

    // Properties of Recursion
        // a. Anything that can be done with Iteration, can be done with // recursion and vice-versa.
        // b. Recursion can sometimes give the most simple solution.
        // c. Base Case is the condition which stops recursion.
        // d. Iteration has infinite loop & Recursion has stack overflow



//CHAPTER 05: Recursion using Math
// Practice Qs 32
// Write a function to convert celsius to fahrenheit.
//formula: fahrenheit = (celsius * 9/5) + 32

#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float far = convertTemp(32);
    printf("far : %f",far);
    return 0;
}
float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
}




//CHAPTER 05: Recursion using Math

// Practice Qs 33
// Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main() {
    int sc = 98;
    int math = 95;
    int sanskrit = 99;

    printf("Percentage is: %d\n", calcPercentage(sc, math, sanskrit));

    return 0;
}

int calcPercentage(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) * 100 ) / 300 ;
}






//CHAPTER 05: Recursion using Math

    // Practice Qs 34
    // Write a function to print n terms of the fibonacci sequence.
    //0 1 1 2 3 5 8 13 21 ...... 
    
    //Example:
    // fib(2) = fib(0) + fib(1)
    // fib(3) = fib(1) + fib(2)
    // fib(4) = fib(2) + fib(3)

    // fib(n) = fib(n - 1) + fib(n - 2)

#include<stdio.h>

int fib(int n);

int main() {
   
   printf("%d",fib(6));

    return 0;
}

int fib(int n) {
    //base case
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;

    // printf("Fib of %d is : %d\n",n, fibN);

    return fibN;
}








//CHAPTER 05: Recursion using Math

    // Practice Qs 34
    // Write a function to print n terms of the fibonacci sequence.
    //0 1 1 2 3 5 8 13 21 ...... 
    
    //Example:
    // fib(2) = fib(0) + fib(1)
    // fib(3) = fib(1) + fib(2)
    // fib(4) = fib(2) + fib(3)

    // fib(n) = fib(n - 1) + fib(n - 2)

#include<stdio.h>

int fib(int n);

int main() {
   
   printf("%d",fib(6));

    return 0;
}

int fib(int n) {
    //base case
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;

    // printf("Fib of %d is : %d\n",n, fibN);

    return fibN;
}

// Practice Qs 35
// Write a function to print the nth term of the fibonacci sequence.


// HOMEWORK SET
// a. Write a function to find sum of digits of a number.
// b. Write a function to find square root of a number.
// c. Write a function to print "Hot" or "Cold" depend on the temperature user enters.
// d. Make your own pow function.








//Chapter 06: Pointers
    //pointer is a variable that stores address of another variable
    //(write * between dataType and variable name -> pointer name)
    
    // * means value at address 
    // & means address of 
    // *ptr = will return value store at pointer variable named "ptr"
    
    //Syntax:
        //normal variable
        // int age = 22;

        //pointer variable
        // int *ptr = &age;
        // int _age = *ptr;
    
#include<stdio.h>

int main() {

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);

    return 0;
}









//Chapter 06: Pointers

//declaring pointers
    // int *ptr;
    // char *ptr;
    // float *ptr;

    //type of pointer decides which type of value stored at storing address is

// Format Specifier
    // printf("%p", &age); -> print address where variable age is stored

    // printf("%p", ptr); -> print address where variable age is stored

    // printf("%p", &ptr); -> print address where variable ptr is stored

    //%p means pointer address -> return hexadecimal value that can be seen via %u (unsigned int) to understand better



#include<stdio.h>

int main() {

    int age = 22;
    int *ptr = &age;
    
    //printing address
    
    //printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%u\n", ptr);

    printf("%u\n", &ptr);


    //printing value stored in pointer
    //print value stored in age
    printf("%d\n", age); 
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}




//Chapter 06: Pointers

//practice question
    // int *ptr;
    // int x;

    // ptr = &x;
    // *ptr = 0;

    // printf(" x = %d\n", x);
    // printf(" *ptr = %d\n", *ptr);

    // *ptr += 5;
    // printf(" x = %d\n", x);
    // printf(" *ptr = %d\n", *ptr);

    // (*ptr)++;
    // printf(" x = %d\n", x);
    // printf(" *ptr = %d\n", *ptr);


#include<stdio.h>

int main() {

    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d\n", x); //0
    printf(" *ptr = %d\n", *ptr); //0

    *ptr += 5;
    printf(" x = %d\n", x); //5
    printf(" *ptr = %d\n", *ptr); //5

    (*ptr)++;
    printf(" x = %d\n", x); //6
    printf(" *ptr = %d\n", *ptr); //6

    return 0;
}



//Chapter 06: Pointer to  Pointer 
    //Pointer to Pointer is a variable that stores the memory address of another pointer

    // Pointer to Pointer
    
    // Syntax
    // int **pptr;
    // char **pptr;
    // float **pptr;



#include<stdio.h>

int main() {

    float price = 100;
    float *ptr = &price;
    float **pptr = &ptr; //Pointer to Pointer
    

    return 0;
}




//Chapter 06: Pointer to  Pointer 

// Practice Qs 37
// Print the value of 'i' from its pointer to pointer

#include<stdio.h>

int main() {

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", *pptr); //print "address of ptr"
    printf("%d\n", **pptr); //print value stored at "address of ptr"

    return 0;
}



//Chapter 06: Pointers

    //Pointers in Function Call

    //Function Call
        // - there are 2 types of function calls in C
        // 1. call by value
            // - we pass value of variables as argument

        //2. call by reference
            // - we pass address of variable as argument

#include<stdio.h>

void square(int n);
void _square(int *n);

int main() {

    int number = 4;

    //call by value
    square(2);
    printf("number  = %d\n",number); //value remain same due to call by value means copy of value passed to function call and keep the original value same

    //call by reference
    _square(&number);
    printf("number  = %d\n",number); //value remain same due to call by value means copy of value passed to function call and keep the original value same
    
    return 0;
}

void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}
   
void _square(int *n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}



//Chapter 06: Pointers

    //Pointers in Function Call

    //Function Call
        // - there are 2 types of function calls in C
        // 1. call by value
            // - we pass value of variables as argument

        //2. call by reference
            // - we pass address of variable as argument

#include<stdio.h>

void square(int n);
void _square(int *n);

int main() {

    int number = 4;

    //call by value: pass copy of value stored in variable number
    square(2);
    printf("number  = %d\n",number); //4

    //call by reference: pass copy of address of variable number where value is stored
    _square(&number); 
    printf("number  = %d\n",number); //16
    
    return 0;
}

void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}
   
void _square(int *n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}





//Chapter 06: Pointers

// Practice Qs 38
    // Swap 2 numbers, a & b.
    //swap means interchange values

#include<stdio.h>

//call by value
void swap(int a, int b);

int main() {

    int x = 3, y = 5;
    
    printf("x = %d, y = %d\n", x, y); //x = 3, y = 5
    
    swap(x, y); // x = 5, y = 3;

    printf("x = %d, y = %d\n", x, y); //x = 3, y = 5
    return 0;
}


void swap(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n", a, b);
}




//Chapter 06: Pointers

// Practice Qs 38
    // Swap 2 numbers, a & b. Swap means interchange values

#include<stdio.h>

//pass by reference: use when we want the function to return multiple values 

void _swap(int *a, int *b);

int main() {

    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x: %d, y: %d\n", x,y);

    return 0;
}

void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    b* = t;
}




//Chapter 06: Pointers

// Practice Qs 39
//Will the address output be same?

void printAddress(int n);

int main() {
    int n = 4;

    printf("Address of n is: %u\n", &n);
    printAddress(n);

    return 0;
}

void printAddress(int n) {
    printf("Address of n is: %u\n", &n);
}
//So, address will not same due to call by value





//Chapter 06: Pointers

// Practice Qs 39
//Will the address output be same?

void printAddress(int *n);

int main() {
    int n = 4;

    printf("Address of n is: %u\n", &n);
    printAddress(&n);

    return 0;
}

void printAddress(int *n) {
    printf("Address of n is: %u\n", n);
}
//So, address will be same due to call by reference






//Chapter 06: Pointers

// Practice Qs 40
// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.


void doWork(int a, int b, int *sum, int *prod, int *avg);
int main() {

    int a = 3, b = 5;
    int sum, prod, avg;

    
    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;


}

// HOMEWORK SET
    // a. Write a program in C to find the maximum number
    // between two numbers using a pointer.
    // b. Write a program in C to print the elements of an array in reverse order.
    // c. Write a program in C to print all the letters in english alphabet using a pointer.





    // Chapter 07: Arrays

//Collection of similar data types stored at contiguous memory locations

//syntax:
    // dataType arrayName[sizeOfArray];
    
    // int marks[3]; //reverse 3 blocks in memory that are contiguous in memory location where each block reserves 4 bytes
    // char name[10];
    // float price[2];
    
    //array uses 0-based indexing means first element stored at 0 index, second element stored at 1 index, third element stored at 2 index
    
    // Input & Output
        // scanf("%d", &marks[0])
        // printf("%d", marks[0]);

        

#include<stdio.h>
int main () {

    int marks1 = 97;
    int marks2 = 98;
    int marks3 = 89;

    int makrs[] = {97, 98, 89};

    
    return 0;
}






// Chapter 07: Arrays

#include<stdio.h>
int main () {

    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 89;

    int marks[3];
    printf("Enter phy: ");
    scanf("%d", &marks[0]);

    printf("Enter chem: ");
    scanf("%d", &marks[1]);
    
    printf("Enter matah: ");
    scanf("%d", &marks[2]);
    
    printf("phy = %d, matah = %d, matah = %d ", marks[0], marks[1], marks[2]);
    
    return 0;
}




// Chapter 07: Arrays 

//Array Declaration

// Practice Qs 41
// Write a program to enter price of 3 items & print their final cost with gst. (gst = itemcost*18%)


#include<stdio.h>
int main () {

    float price[3];
    printf("Enter 3 prices: ");
    scanf("%f\n", &price[0]);
    scanf("%f\n", &price[1]);
    scanf("%f\n", &price[2]);
        
    printf("total price 1: %f\n", price[0] + (0.18*price[0]));
    printf("total price 2: %f\n", price[1] + (0.18*price[1]));
    printf("total price 3: %f\n", price[2] + (0.18*price[2]));
    
    return 0;
}




// Chapter 07: Arrays

    //Inititalization of Array
        // int marks[] = {97, 98, 89} //consume 12 bytes
        //char marks[] = ['c', 'd', 'c'] //consume 3 bytes
        // int marks[3] = {97, 98, 89} 

#include<stdio.h>
int main () {

    float price[] = {100.0, 200.0, 300.0 };
    
    printf("total price 1: %f\n", price[0] + (0.18*price[0]));
    printf("total price 2: %f\n", price[1] + (0.18*price[1]));
    printf("total price 3: %f\n", price[2] + (0.18*price[2]));
    

    return 0;
}




// Chapter 07: Arrays

//Pointer Arithmetic
    //pointer can be increemented & decremented

    //case 01: 
    
    // int age = 22;
    // int *ptr = &age;
    // ptr++; // ptr = ptr + 1 //means increase size (increase size in bytes depending upon type of data) //that means now, ptr points to another memory location
    

 
#include<stdio.h>
int main () {

    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr); //6422296
    ptr++;
    printf("ptr = %u\n", ptr); //6422300   
    ptr--;
    printf("ptr = %u\n", ptr); //6422296   
    
    return 0;
}




// Chapter 07: Arrays

//Pointer Arithmetic
    
    //case 02:
    // float price = 20.00;
    // float *ptr = &price;
    // ptr++;    
 
#include<stdio.h>
int main () {

    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u\n", ptr); //6422296
    ptr++;
    printf("ptr = %u\n", ptr); //6422300   
    ptr--;
    printf("ptr = %u\n", ptr); //6422296   
    
    return 0;
}




// Chapter 07: Arrays

//Pointer Arithmetic
    
    //case 03:
    // char star = '*';
    // char *ptr = &star;
    // ptr++;
 
#include<stdio.h>
int main () {

    
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n", ptr); //6422296
    ptr++;
    printf("ptr = %u\n", ptr); //6422300   
    ptr--;
    printf("ptr = %u\n", ptr); //6422296   
    
    return 0;
}





// Chapter 07: Arrays

//Pointer Arithmetic
    // - we can subtract one pointer from another


    //we can also compare 2 pointers
 
#include<stdio.h>
int main () {

    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
   
    printf("%u, %u differnce: %u\n", ptr, _ptr, ptr - _ptr); //1 means 1 integer difference (4 bytes as of int)
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr); //1 b/c both point to same address
    
    return 0;
}



// Chapter 07: Arrays

//Pointer Arithmetic
    // - we can subtract one pointer from another (return difference in data type size like 1 = 4 bytes for int, 1 = 1 byte for char etc. c)


    //we can also compare 2 pointers (they need to be of same data type)
 
#include<stdio.h>
int main () {

    int age = 22;
    char _age = 'a';
    int *ptr = &age;
    int *_ptr = &_age;
   
    printf("%u, %u differnce: %u\n", ptr, _ptr, ptr - _ptr); //1 means 1 integer difference (4 bytes as of int)
    
    return 0;
}



// Chapter 07: Arrays
    //Array is a Pointer means actually arrays are pointer

    // int *ptr = &arr[0]; <==> int *ptr = arr;

#include<stdio.h>
int main () {

    
    return 0;
}




// Chapter 07: Arrays
   
   //Traverse an Array


#include<stdio.h>
int main () {

    int aadhar[5];

    //input values
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++) {
        printf("%d index : ", i);
        // scanf("%d", (ptr+i));
        scanf("%d", &aadhar[i]);
    }
    
    //output
    for(int i=0; i<5; i++) {
        // printf("%d index: %d\n", i, *(ptr+i));
        printf("%d index: %d\n", i, aadhar[i]);
    }
    return 0;
}



// Chapter 07: Arrays
    
    //Arrays as Function Argument
    
    //Function Declaration
        // void printNumbers (int arr[], int n)
        //             OR
        // void printNumbers (int *arr, int n)
    
    //Function Call
        //printNumbers(arr, n);


#include<stdio.h>

void printNumbers(int *arr, int n);

int main () {

    int arr[ ] = {1,2,3,4,5,6};
    printNumbers(arr, 6);

    return 0;
}

//version 2
void printNumbers(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t", arr[i]); 
    }
    printf("\n");
}

//version 1
// void printNumbers(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }




// Chapter 07: Arrays
    
    //Multi-dimensional Arrays
        //2D Arrays [][]
            //used in matrices

        //declare
            //int arr[][] = { {1,2}, {3,4}};

        //access
            // arr[0][0];
            // arr[0][1];
            // arr[1][0];
            // arr[1][1];

        //there are also arrays with more dimensions like 3D or 4D etc
    

#include<stdio.h>


int main () {

    int marks[2][3]; // _ _ _  | _ _ _ 
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 78;

    printf("%d", marks[0][0]);


    return 0;
}





// Chapter 07: Arrays
    
    //Multi-dimensional Arrays
    //    Practice Qs 42
    //     Write a function to count the number of odd numbers in an array.
    

#include<stdio.h>

int countOdd(int arr[], int n);

int main () {

    int arr[] = {1,2,3,4,5,6};
    printf("%d", countOdd(arr, 6));

    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] %2 != 0) {
            count += 1;
        }
    }
    return count;
}




// Chapter 07: Arrays
    
    //Multi-dimensional Arrays
    // Practice Qs 43
    // int arr[] = {1,2,3,4,5};
    // For the given array, what will the following give?
    // a. *(arr+2)
    // b. *(arr+5)
    

#include<stdio.h>


int main () {

    int arr[] = {1,2,3,4,5};
    printf("%d\n", *(arr+2)); //3
    printf("%d\n", *(arr+5)); //4194432

    return 0;
}




// Chapter 07: Arrays
    
    //Multi-dimensional Arrays

    // Practice Qs 44
    // Write a function to reverse an array.
    

#include<stdio.h>

int reverse(int arr[], int n);
void printArr(int arr[], int n);

int main () {

    int arr[] = {1,2,3,4,5};
    
    printArr(arr,5);
    reverse(arr, 5);
    printArr(arr,5);
    
    return 0;
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

//call by reference: change actual array values
int reverse(int arr[], int n) {
    for(int i = 0; i < n /2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}





// Chapter 07: Arrays

//     Practice Qs 45
// Write a program to store the first n fibonacci numbers.
    

#include<stdio.h>


int main () {

   int n;
   printf("enter n (n > 2): ");
   scanf("%d", &n);

   int fib[n];
   fib[0] = 0;
   fib[1] = 1;

    printf("%d\t %d\t", fib[0], fib[1]);

    for(int i = 2; i< n; i++) { //1, 2, 3, 5, 8, 13,
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d \t", fib[i]);
    }

    return 0;
}





// Chapter 07: Arrays

// Practice Qs 46
// Create a 2D array, storing the tables of 2 & 3.
    

#include<stdio.h>


void storeTables(int arr[][10], int n, int m, int number);

int main () {

    int tables[2][10];
    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);

    for(int i=0; i<10; i++) {
       printf("%d\t", tables[0][i]);
    }
    printf("\n");

    for(int i=0; i<10; i++) {
       printf("%d\t", tables[1][i]);
    }

    return 0;
}

//NOtE: must define second dimension of array if you pass 2d array 
void storeTables(int arr[][10], int n, int m, int number) {
    for(int i=0; i<m; i++) {
        arr[n][i] = number * (i+1); //2, 4, 6, ...
    }
}



// Chapter 07: Arrays

// HOMEWORK SET
// a. In an array of numbers, find how many times does
// a number 'x' occurs.
// b. Write a program to print the largest number in an
// array.
// c. Write a program to insert an element at the end of an array.

#include<stdio.h>

int main () {


    return 0;
}





// Chapter 08: strings

// Strings
    // - A character array terminated by a '\O' (null character) 
    // - null character denotes string termination
    // - need to add \0 (null character) while declaring characters to show as string
    // EXAMPLE
    // char name[] = {'Z', 'E', 'E', 'S', 'H', 'A', 'N','\0'}; //basically => ZEESHAN due to \0
    // char class[] = {'A', 'H', 'M', 'E', 'D', '\0'};

//Initialising Strings
    // strings must be written in double quotes
    
    // char name[] = {'Z', 'E', 'E', 'S', 'H', 'A', 'N','\0'};
    // char name[] = "ZEESHAN";

    // char class[] = {'A', 'H', 'M', 'E', 'D', '\0'};
    // char class[] = "AHMED";

#include<stdio.h>

int main () {

    // char name[] = {'Z', 'E', 'E', 'S', 'H', 'A', 'N','\0'};
    char name[] = "ZEESHAN"; //c compiler automatically add \0

    // char class[] = {'A', 'H', 'M', 'E', 'D', '\0'};
    char class[] = "AHMED";

    return 0;
}



// Chapter 08: strings

// WHAT HAPPENDS in Memory when Store Strings?
    // char name[] = {'Z', 'E', 'E', 'S', 'H', 'A', 'N','\0'};
    //char name[] = "ZEESHAN"; //c compiler automatically add \0
    
    //Now, inside memory, a chunk of memory is allocated with name "name" and inside of that chunk, there are small chunks of memory, each storing single character, taking one byte each small chunk of memory and at the end it also store \0 in another small chunk. All these small chunks of memory are continously allocated in memory due to array as strings is colleciton of character array


#include<stdio.h>

int main () {


    return 0;
}




// Chapter 08: strings

//Practice Qs 47
    // Create a String firstName & lastName to store details of user & print all the characters using a loop.

#include<stdio.h>

void printString(char arr[]);

int main () {

    char firstName[] = "Zeeshan";
    char lastName[] = "Ahmed";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]) {
    for( int i = 0; arr[i] != '\0' ; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}








// Chapter 08: strings

//String Format Specifier:
    // we use "%s" for string 
    
    // don't use & becuase string is collection of character array and array is basically a pointer. So, don't need to use & before variable name

    //Example:
        //char name[] = "Zeeshan";
        // scanf("%s", name); 
        // printf("%s", name);

#include<stdio.h>


int main () {
    char name[50];
    printf("Enter name: ");
    scanf("%s", name); //c compiler add \0 automatically when use %s 
    printf("Your name is: %s", name);


    return 0;
}









// Chapter 08: strings

// Practice Qs 48
// Ask the user to enter their firstName & print it back to them.
// Also try this with their fullName.


#include<stdio.h>


int main () {
    char firstName[50];
    printf("Enter firstName: ");
    scanf("%s", firstName); 
    printf("Your firstName is: %s", firstName);


    return 0;
}







// Chapter 08: strings

// Practice Qs 48
// Ask the user to enter their firstName & print it back to them.
// Also try this with their fullName.

// IMPORTANT
// scanf( ) cannot input multi-word strings with spaces
// Here,
// gets( ) & puts( ) come into picture



#include<stdio.h>

int main () {
    // char firstName[50];
    // printf("Enter firstName: ");
    // scanf("%s", firstName); 
    // printf("Your firstName is: %s", firstName);

    char fullName[100];
    printf("Enter your full Name: ");
    scanf("%s", fullName); //don't take word after space. So, need another tool for that i.e., gets() & put(). gets() is deprecated now, so use fgets() instead

    printf("Your firstName is: %s", fullName);

    return 0;
}





// Chapter 08: strings

//String Functions:
    
    //put(str)
        //output a string

    //gets(str)
        //input a string (even multi-word)
        //dangerous as it don't track what is the maximum size of str and due this there are many chances the system to be hacked and outdated, so use fgets() instead 

    //fgets(str, n, file)
        //stops when n - 1 chars input or new line is entered
        // n = size of string
        // file  = file name but write "stdin -> will end string when hit enter ""

#include<stdio.h>

int main () {

//    char str[100];
//    gets(str);
//    puts(str);

   char str[100];
   fgets(str, 100, stdin);
   puts(str); //add \n t end of string



    return 0;
}




// Chapter 08: strings

// String using Pointers

    //strings are also pointers like arrays

    //can create strings using array notation or pointer notation

    //ARRAY NOTATION:
    //ARRAY NOTATION:

    // char *str = "Hello World";
  
    // Store string in memory & the assigned address is stored in the char pointer 'str'

    // char *str = "Hello World"; //can be reinitialized

    // char str[] = "Hello World"; //cannot be reinitialized

#include<stdio.h>

int main () {

    char *canChange = "Hello world";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello world";
    puts(cannotChange);
    // cannotChange = "Hello"; //error: expression must be a modifiable value; becuase array notation modifications are not allowed

    return 0;
}




// Chapter 08: strings

// Practice Qs 49
// Make a program that inputs user's name & prints its length.

#include<stdio.h>

int countLength(char arr[]);

int main () {

    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d ", countLength(name));

    return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    return count - 1;
}






// Chapter 08: strings

// Standard Library Functions: 
    // <math.h>
    // <string.h>

// strlen(str)
    // count number of characters excluding \0 null character

#include<stdio.h>
#include<string.h>

int main () {

    char name[] = "Ahmed";
    int length = strlen(name);
    printf("Length is: %d", length);
    
    return 0;
}



// strcpy(newStr, oldStr)
    //copies vlaues of old string to new string

#include<stdio.h>
#include<string.h>

int main () {
 
    char oldStr[] = "old string";
    char newStr[] = "new string";
    strcpy(newStr, oldStr); //old string
    printf("%s", newStr);

    return 0;
}






//3 strcat(firstStr, secStr)
    //concatenates first string with second string
    //concatenate other string values to first string
    
    
    //concatenation means joing two strings, add no spacing between strings
    
    //we can also concatenate other string values into a single string but that string should have the capacity to hold other string values

#include<stdio.h>
#include<string.h>

int main () {
 
    char firstStr[100] = "Hello ";
    char secString[] = "World!";
    strcat(firstStr, secString); 
    puts(firstStr); //Hello World!

    return 0;
}





// Chapter 08: strings

// Standard Library Functions: 
    // <math.h>
    // <string.h>

//  strcpm(firstStr, secStr)
        // Compares 2 strings & returns a value
        
        // O -> strings are equal
        // positive -> means first > second (ASCII)
        // negative -> means first < second (ASCII)

    //use in places like dictionary where sort words in alphabetical order

    
#include<stdio.h>
#include<string.h>

int main () {
 
    char firstStr[] = "HHH";
    char secString[] = "HHH";
    printf("%d\n", strcmp(firstStr, secString));
    printf("%d\n", strcmp(secString, firstStr));

    return 0;
}



// Chapter 08: strings

//  Practice Qs 50
// Take a string input from the user using %c.

#include<stdio.h>
#include<string.h>


int main () {
    
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
 
    return 0;
}





// Chapter 08: strings
    // Salting (technique of securing password where company add extra characters to your password in order to protect it.)

//  Practice Qs 51
    // Salting 
    // Find the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main () {
    
    char password[100];
    scanf("%s", password);
    salting(password);

    return 0;
}

void salting (char password[]) {
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password); //newPassword = test
    strcat(newPassword, salt); //newPassword = test123
    puts(newPassword);
}




// Chapter 08: strings

// Practice Qs 52
    // Write a function named slice, which takes a string & returns a sliced string from index n to m.

#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main () {
   
   char str[] = "Helloworld!";
   slice(str, 3, 6);
    return 0;
}


void slice(char str[], int n, int m) {
    //n and m are valid values

    char newStr[100];
    for(int i = n, j=0; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}




// Chapter 08: strings

//Practice Qs 53
    // Write a function to count the occurrence of vowels in a string.

#include<stdio.h>
#include<string.h>

int countVowels(char str[]);

int main () {
   
    char str[] = "Helloworld!";
    printf("vowerls are %d", countVowels(str));
    return 0;
}


int countVowels(char str[]) {
    int count = 0;
    for(int i = 0;  str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}


// Chapter 08: strings

//Practice Qs 54
// Check if a given character is present in a string or not.

#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main () {
   
    char str[] = "Hello world!";
    char ch = 'w';
    checkChar(str, ch);

    return 0;
}

void checkChar(char str[], char ch) {
    for(int i = 0;  str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present");
            return;
        }
    }
    printf("character is not present");
}



// HOMEWORK SET
// a. Write a program to convert all lowercase vowels to
// uppercase in a string.
// b. Write a program to print the highest frequency
// character in a string.
// c. Write a program to remove blank spaces in a string.
// d. Write a program to replace lowercase letters with
// uppercase & vice versa in a string.




// Chapter 09: Structures

    // - structures are a collection of values of different data types

    // EXAMPLE
        // For a student store the following :
        // name (String)
        // roll no (Integer)
        // cgpa (Float):

    // data types are of 2 types
        //1.Inbuilt 
            // already made or available like int, float, char etc.

        //2. User-defined Data Types:
            // made by user like struct etc


    // Syntax:
        // declaration 
            // struct student {
            //     char name[100];
            //     int roll;
            //     float cgpa;
            // };

        // using
            // struct student s1;
            // s1.cgpa = 7.5


#include<stdio.h>
#include<string.h>

// define struct
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
   
   //declare struct
   struct student s1;

   //access properties of struct
   s1.roll = 1664;
   s1.cgpa = 9.2;
//    s.name = "zeeshan"; //error due to array notation
    strcpy(s1.name, "zeeshan");
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}



// Chapter 09: Structures

    // Structures in Memory:
        //structures take contiguous memory locations



// Chapter 09: Structures

     // Practice Qs 55
    // Write a program to store the data of 3 students.

#include<stdio.h>
#include<string.h>

// define struct
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
   
    struct student s1;

    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "zeeshan");
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("\n");
    
    struct student s2;

    s2.roll = 1660;
    s2.cgpa = 8.7;
    strcpy(s2.name, "ahmed");
    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    printf("\n");
    
    
    struct student s3;

    s3.roll = 1662;
    s3.cgpa = 7.5;
    strcpy(s3.name, "channa");
    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    printf("\n");

    return 0;
}










// Chapter 09: Structures

     // Benefits of Structs:
        // 1. saves us from creating too many variables
        // 2. good data management and organization 




// Chapter 09: Structures

    // Array of Structures
        // struct student ECE[IOO];
        // struct student COE[100];
        // struct student IT[100];

    // ACCESS
        // IT[0].roll = 200;
        // IT[0].cgpa = 7.6;


#include<stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
    
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "shradha");

    printf("name = %s\n", ece[0].name);
    printf("roll = %s\n", ece[0].roll);
    printf("cgpa = %s\n", ece[0].cgpa);

    return 0;
}







// Chapter 09: Structures

    // Initializing Structures
        // struct student s1 = { "shradha", 1664, 7.9};
        // struct student s2 = {"rajat", 1552, 8.3};
        // struct student s3 = {0}; //means all three values are null


#include<stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
    //we should provide values in the same order as the properties defined in the struct
    
    struct student s1 = {1664, 9.2, "zeeshan"};
    printf("student roll: %d\n", s1.roll);

    return 0;
}






// Chapter 09: Structures

    // Pointers to Structures
        // struct student sl ;
        // struct student *ptr;
        // ptr = &s1;


#include<stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {

    struct student s1 = {1664, 9.2, "zeeshan"};
    printf("student roll: %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d\n", (*ptr).roll);

    return 0;
}






// Chapter 09: Structures

    //Arrow Operator
        // (*ptr).code <---> ptr->code

#include<stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {

    struct student s1 = {1664, 9.2, "zeeshan"};
    printf("student roll: %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d\n", (*ptr).roll);
    
    printf("\n");
    printf("student roll = %d\n", ptr->roll);
    printf("student name = %s\n", ptr->name);
    printf("student cgpa = %f\n", ptr->cgpa);

    return 0;
}






// Chapter 09: Structures

    //Passing structure to function

    //Function Prototype
    void printlnfo(struct student sl);

#include<stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

//need to use struct after declaration
void printfInfo(struct student s1);

int main () {

    struct student s1 = {1664, 9.2, "zeeshan"};

    printfInfo(s1); //structs are call by value
    printf("student.roll = %d\n", s1.roll); //1664

    return 0;
}

void printfInfo(struct student s1) {
    printf("student information: \n");
    printf("student.roll = %d\n", s1.roll);
    printf("student.name = %s\n", s1.name);
    printf("student.cgpa = %f\n", s1.cgpa);

    s1.roll = 1660;

}









// Chapter 09: Structures

    // typedef Keyword
    
    // used to create alias (nicknames) for data types
    // we can create aliases for int, float, char
    //mostly used in structures

    //     typedef struct ComputerEngineeringStudent{
        //     int roll;
        //     float cgpa;
        //     char name [100];
    //     } coe;
    //     coe student1 ;


#include<stdio.h>
#include<string.h>

typedef struct student {
        int roll;
        float cgpa;
        char name [100];
} stu;

typedef struct ComputerEngineeringStudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main () {

//    struct student s1;
    // stu s2;

    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Zeeshan");

    printf("student name is %s\n", s1.name);

    return 0;
}










// Chapter 09: Structures

    // Practice Qs 56
        // Enter address (house no, block, city, state) of 5 people.


#include<stdio.h>
#include<string.h>


struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address add);

int main () {

    struct address adds[5];
    //input
    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 4: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 5: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);

    return 0;
}

void printAddress(struct address add) {
    printf("address is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}










// Chapter 09: Structures

    // Practice Qs 57
        // Create a structure to store vectors. Then make a function to return sum of 2 vectors.


#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main () {

   struct vector v1 = { 5, 10};
   struct vector v2 = {3, 7};
   struct vector sum;
   
   calcSum(v1, v2, sum);

    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);
}









// Chapter 09: Structures

    // Practice Qs 58
        // Create a structure to store complex numbers.(use arrow operator)


#include<stdio.h>
#include<string.h>

struct complex {
    int real;
    int img;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main () {

    struct complex number1 = {5,8};
    struct complex *ptr = &number;
    printf("real part = %d\n", ptr -> real);
    printf("imaginary part = %d\n", ptr -> img);

    return 0;
}







// Chapter 09: Structures

    //Practice Qs 59
    // You have to store the marks of 30 students in class.
    // What will you use?
        // a. array of 10 floats
        // b. structure

    //So, use arrays here because data is of same types and mostly structures are used where there are different data types involved in data.








// Chapter 09: Structures

    //Practice Qs 60
        // Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias for it.

#include<stdio.h>
#include<string.h>

typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc;

int main () {

    acc acc1 = {123, "zeehsan"};
    acc acc2 = {124, "ahmed"};
    acc acc3 = {125, "channa"};

    printf("Account No: %d\n", acc1.accountNo);
    printf("Account Name: %s\n", acc1.name);

    return 0;
}










// Chapter 09: Structures

    //HOMEWORK SET
        // Make a system that can store information of all students, teachers & staff of your college in the form of structures.

        // You can also make this into a C Project with other functionalities like cgpa calculation of students, storing attendance etc.

#include<stdio.h>
#include<string.h>

int main () {

   

    return 0;
}




















// Chapter 10: File Input and Output:

    // File IO
        // FILE - container in a storage device to store data
        // - RAM is volatile
        // - Contents are lost when program terminates
        // - Files are used to persist the data

    // Operation on Files
        // Create a File
        // Open a File
        // Close a File
        // Read from a File
        // Write in a File

    // Types of Files
        // Text Files
            // for storing textual data
            // .txt, .c
        
        // Binary Files
            // for storing binary data
            // .exe, .mp3, .jpg

    



  // How to access files: 
        // File Pointer
            // FILE is a (hidden)structure that needs to be created for opening a file a file
            
            // A FILE ptr that points to this structure & is used to access the file.
                // FILE *fptr;

        // Opening a File
        //     FILE *fptr;
        //     fptr = fopen("filename", mode);
        
        // Closing a File
        //     fclose(fptr);


    // File Opening Modes:
        // - "r" = open to Read 
        // - "rb" = open to read in binary
        // - "w" = open to Write
        // - "wb" = open to Write in binary
        // - "a" = open to append

        //NOTE: 
            // -  if file to open doesn't exits, then in "r" or "rb" modes it will store "null"

            // - "w" and "wb" modes will create new file if the file to be written doesn't exist otherwise it will remove orignal contents with new one.
            
            // - "a" will keep orignal contents with new contents. 

    // BEST Practice
        // Check if a file exists before reading from it.
        

#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if(fptr == NULL) {
        printf("File doesn't exist");
    } else {
        fclose(fptr);
    }


    return 0;
}




#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    if(fptr == NULL) {
        printf("File created successfully");
    } else {
        printf("File opened successfully");
    }
    fclose(fptr);


    return 0;
}








// Chapter 10: File Input and Output:
    //File Operations:

    //Reading from a file
        // char ch;
        // fscanf(fptr, "%c", &ch);

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    
    char ch;
    fscanf(fptr, "%c", &ch); //return first letter from file and store it into "ch" variable
    printf("Character = %c\n", ch); //Character = A
    
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch); //Character = p

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);//Character = p

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch); //Character = l

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch); //Character = e

    fclose(fptr);



    return 0;
}







// Chapter 10: File Input and Output:
    //File Operations:

    //Reading from a file
        // int ch;
        // fscanf(fptr, "%c", &ch);

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    
    int ch;
    fscanf(fptr, "%d", &ch); //return first letter from file and store it into "ch" variable
    printf("Character = %d\n", ch); //Character = 123
    
    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch); //Character = 456

    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);//Character = 7899

    fclose(fptr);



    return 0;
}






// Chapter 10: File Input and Output:
    //File Operations:

    //Writing to a file with Appending
        // char ch = 'A';
        // fprintf(fptr, "%c", ch);

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "a");
    
    fprintf(fptr, "%c", 'M'); //must write in 'single quotes' for single character    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    fclose(fptr);

    return 0;
}








// Chapter 10: File Input and Output:
    //File Operations:

    // Read & Write a char:
        //fgetc(fptr);      //for reading single character from file
        
        //fputc('A', fptr); //for writing single character to file

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));


    fclose(fptr);



    return 0;
}








// Chapter 10: File Input and Output:
    //File Operations:

    // Read & Write a char:
        //fgetc(fptr);      //for reading single character from file
        
        //fputc('A', fptr); //for writing single character to file

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "w");
    fputc('M', fptr); 
    fputc('A', fptr); 
    fputc('N', fptr); 
    fputc('G', fptr); 
    fputc('O', fptr); 

    fclose(fptr);



    return 0;
}











// Chapter 10: File Input and Output:
    //File Operations:

    // Read & Write a char:
        //fgetc(fptr);      //for reading single character from file
        
        //fputc('A', fptr); //for writing single character to file

     // EOF (End Of File)
        // fgetc returns EOF to show that the file has ended

    
#include<stdio.h>

int main () {

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












// Chapter 10: File Input and Output:
    //Practice Qs 61
        // Make a program to read 5 integers from a file.

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("test.txt", "r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);

    fclose(fptr);


    return 0;
}









// Chapter 10: File Input and Output:
    //Practice Qs 62
        // Make a program to input student information from a user & enter it to a file.

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);


    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    fclose(fptr);


    return 0;
}






// Chapter 10: File Input and Output:
    //Practice Qs 62
        // Make a program to input student information from a user & enter it to a file.

    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);


    fprintf(fptr, "student name : %s\n", name);
    fprintf(fptr, "student age  : %d\n", age);
    fprintf(fptr, "student cgpa : %f\n", cgpa);

    fclose(fptr);


    return 0;
}







// Chapter 10: File Input and Output:
    //Practice Qs 63
        // Write a program to write all the odd numbers from 1 to n in a file.
    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("odd.txt", "w");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        if(i%2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);


    return 0;
}








// Chapter 10: File Input and Output:
    //Practice Qs 64
        // 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.
    
#include<stdio.h>

int main () {

    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    //reading two numbers from file
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    //writing sum of two numbers to orignal file
    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);



    return 0;
}




// HOMEWORK SET:
// a. Write a program to read a string from a file &
// output to the user.
// a. Replace the data in file of Q(a) with the number of
// vowels in the string.
// c. Format the information of 5 students (name,
// marks, cgpa, course) in a table like structure in a file.










// Chapter 11: Dynamic Memory Allocation
 
    //Memory Allocation:
        //there are two ways to allocate memory
            //1. static memory allocation
            //2. dynamic memory allocation

    // 1. static memory allocation (compile time)
        //  It is a way to allocate memory to a data structure during the compile time or while variable declaration 

    // 2. dynamic memory allocation (run time):
        // It is a way to allocate memory to a data structure during the runtime.

        // We need some functions to allocate & free memory dynamically.






// Chapter 11: Dynamic Memory Allocation
 
    // Functions for DMA
    //     a. malloc( ) -> used to allocate particular amount of memory like if you need 14 or 30 bytes of memory, it will provide you that.

    //     b. calloc( ) ->  

    //     c. free( )

    //     d. realloc( )

    // malloc( )
        // memory allocation
        // takes number of bytes to be allocated
        // & returns a pointer of type void
        
        // ptr = (*int) malloc(5 * sizeof(int));

#include<stdio.h>

int main () {

    printf("%d\n", sizeof(int)); //4
    printf("%d\n", sizeof(float)); //4
    printf("%d\n", sizeof(char)); //1

    return 0;
}











// Chapter 11: Dynamic Memory Allocation
 
    // Functions for DMA
    //     a. malloc( ) -> used to allocate particular amount of memory like if you need 14 or 30 bytes of memory, it will provide you that.

    //     b. calloc( ) ->  

    //     c. free( )

    //     d. realloc( )

    // malloc( )
        // memory allocation
        // takes number of bytes to be allocated
        // & returns a pointer of type void
        
        // ptr = (*int) malloc(5 * sizeof(int));

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;

    //get memory duirng runtime
    ptr = (int *) malloc(5 * sizeof(int)); //return NULL if system can't provide demanded memory

    //store values
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    //output stored values
    for(int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}







// Chapter 11: Dynamic Memory Allocation
 
    // Practice Qs 65
    //     WAP to allocate memory to store 5 prices.

#include<stdio.h>
#include <stdlib.h>

int main () {
    float *ptr;
    ptr = (float *) malloc(sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0; i < 5; i++) {
        printf("%f\n", ptr[i]);
    }

    return 0;
}







// Chapter 11: Dynamic Memory Allocation
 
    //    calloc( )
            // means continuous allocation; allocates memory in contiguous fashion

            // each slot initializes with 0 for integer, 0.00 for float, 

            // ptr = (*int) calloc(5, sizeof(int)); WAP to allocate memory to store 5 prices.

#include<stdio.h>
#include <stdlib.h>

int main () {
    float *ptr;
    ptr = (float *) calloc(5, sizeof(float));

    for(int i = 0; i < 5; i++) {
        printf("%f\n", ptr[i]);
    }

    return 0;
}







// Chapter 11: Dynamic Memory Allocation
 
    //    calloc( )
    // Practice Qs 66
        // Write a Program (WAP) to allocate memory of size n, where n is entered by the user.

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}








// Chapter 11: Dynamic Memory Allocation
 
    //  free( )
        // We use it to free memory that is allocated using malloc & calloc
        
        // free(ptr);

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr); // freeing up memory


    ptr = (int *) calloc(2, sizeof(int));
    for(int i = 0; i < 2; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}








// Chapter 11: Dynamic Memory Allocation
 
    //  free( )
    
    // Practice Qs 67
        // In Qs 65, free the memory allocated with calloc

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr); // freeing up memory


    ptr = (int *) calloc(2, sizeof(int));
    for(int i = 0; i < 2; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}









// Chapter 11: Dynamic Memory Allocation
 
    //  Practice Qs 68
        // Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter numbers(5): ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter numbers(8): ");
    for(int i = 0; i < 8; i++) {
        scanf("%d\n", &ptr[i]);
    }

    //print
    for(int i = 0; i < 8; i++) {
        printf("number %d is %d\n", i, ptr[i]);
    }


    return 0;
}





// Chapter 11: Dynamic Memory Allocation
 
    //  Practice Qs 69
        // Create an array of size 5(using calloc) & enter its values from the user.

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter numbers(5): ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    //print
    for(int i = 0; i < 5; i++) {
        printf("number %d is %d\n", i, ptr[i]);
    }


    return 0;
}






// Chapter 11: Dynamic Memory Allocation
 
    // Practice Qs 70
        // Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.

#include<stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    //print
    for(int i = 0; i < 5; i++) {
        printf("number %d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for(int i = 0; i < 6; i++) {
        printf("number %d\n", ptr[i]);
    }

    free(ptr);


    return 0;
}


// HOMEWORK SET
// a. Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.
// b. Take a number(n) from user & output its cube(n*n*n).
// c. Write comments for programs a & b.

//END OF COURSE



















