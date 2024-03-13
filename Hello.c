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