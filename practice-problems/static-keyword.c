/*
Static Keyword:
    Static is a keyword used in C programming language. It can be used with both variables and functions, i.e., we can declare a static variable and static function as well. An ordinary variable is limited to the scope in which it is defined, while the scope of the static variable is throughout the program.


    Static variable
        A static variable is a variable that persists its value across the various function calls.
        The syntax of a static variable is given below:
        static data_type variable_name;   

    Static Function
        As we know that non-static functions are global by default means that the function can be accessed outside the file also, but if we declare the function as static, then it limits the function scope. The static function can be accessed within a file only.

        The static function would look like as:

        static void func()  
        {  
            printf("Hello javaTpoint");  
        }  

    Differences b/w static and global variable
        Global variables are the variables that are declared outside the function. These global variables exist at the beginning of the program, and its scope remains till the end of the program. It can be accessed outside the program also.

        Static variables are limited to the source file in which they are defined, i.e., they are not accessible by the other source files.

        Both the static and global variables have static initialization. Here, static initialization means if we do not assign any value to the variable then by default, 0 value will be assigned to the variable.

    Differences b/w static local and static global variable
        Static global variable

            If the variable declared with a static keyword outside the function, then it is known as a static global variable. It is accessible throughout the program.

        Static local variable

            The variable with a static keyword is declared inside a function is known as a static local variable. The scope of the static local variable will be the same as the automatic local variables, but its memory will be available throughout the program execution. When the function modifies the value of the static local variable during one function call, then it will remain the same even during the next function call.

    Properties of a static variable
        The following are the properties of a static variable:

        - The memory of a static variable is allocated within a static variable.
        - Its memory is available throughout the program, but the scope will remain the same as the automatic local variables. Its value will persist across the various function calls.
        - If we do not assign any value to the variable, then the default value will be 0.
        - A global static variable cannot be accessed outside the program, while a global variable can be accessed by other source files.
*/

/*
// Program without static variable: 

#include <stdio.h>  
int main()  
{  
 printf("%d",func());  
printf("\n%d",func());  
 return 0;  
}  
int func()  
{   
    int count=0; // variable initialization  
    count++; // incrementing counter variable  
  
   return count;
}  
*/

// Let's look at a simple example of static variable.

#include <stdio.h>  
int main()  
{  
   printf("%d",func());  
   printf("\n%d",func());  
  
    return 0;  
}  
int func()  
{  
    static int count=0;  
    count++;  
    return count;  
}  