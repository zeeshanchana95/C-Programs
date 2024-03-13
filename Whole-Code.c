
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