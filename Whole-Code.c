
//C++ Tutorials:

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
