/*

Errors:
    Errors are the problems or the faults that occur in the program, which makes the behavior of the program abnormal, and experienced developers can also make these faults. Programming errors are also known as the bugs or faults, and the process of removing these bugs is known as debugging.

    These errors are detected either during the time of compilation or execution. Thus, the errors must be removed from the program for the successful execution of the program.
    
    There are mainly five types of errors exist in C programming:
        Syntax error
        Run-time error
        Linker error
        Logical error
        Semantic error

    Syntax error
        Syntax errors are also known as the compilation errors as they occurred at the compilation time, or we can say that the syntax errors are thrown by the compilers. These errors are mainly occurred due to the mistakes while typing or do not follow the syntax of the specified programming language. These mistakes are generally made by beginners only because they are new to the language. These errors can be easily debugged or corrected.

        For example:
        If we want to declare the variable of type integer,  
        int a; // this is the correct form  
        Int a; // this is an incorrect form.  


    Run-time error
        Sometimes the errors exist during the execution-time even after the successful compilation known as run-time errors. When the program is running, and it is not able to perform the operation is the main cause of the run-time error. The division by zero is the common example of the run-time error. These errors are very difficult to find, as the compiler does not point to these errors.


    Linker error
        Linker errors are mainly generated when the executable file of the program is not created. This can be happened either due to the wrong function prototyping or usage of the wrong header file. For example, the main.c file contains the sub() function whose declaration and definition is done in some other file such as func.c. During the compilation, the compiler finds the sub() function in func.c file, so it generates two object files, i.e., main.o and func.o. At the execution time, if the definition of sub() function is not found in the func.o file, then the linker error will be thrown. The most common linker error that occurs is that we use Main() instead of main().


    Logical error
        The logical error is an error that leads to an undesired output. These errors produce the incorrect output, but they are error-free, known as logical errors. These types of mistakes are mainly done by beginners. The occurrence of these errors mainly depends upon the logical thinking of the developer. If the programmers sound logically good, then there will be fewer chances of these errors.


    Semantic error
        Semantic errors are the errors that occurred when the statements are not understandable by the compiler.

        The following can be the cases for the semantic error:
            Use of a un-initialized variable.
            int i;
            i=i+2;
            
            Type compatibility
            int b = "javatpoint";
            
            Errors in expressions
            int a, b, c;
            a+b = c;
            
            Array index out of bound
            int a[10];
            a[10] = 34;

*/


//Syntax Error:
#include <stdio.h>  
int main()  
{  
    a = 10;  
    printf("The value of a is : %d", a);  
   return 0;  
}  


#include <stdio.h>  
int main()  
{  
  int a=2;  
  if(.)  // syntax error  
  
  printf("a is greater than 1");  
   return 0;  
}  



//Runtime Error:
#include <stdio.h>  
int main()  
{  
    int a=2;  
    int b=2/0;  
    printf("The value of b is : %d", b);  
    return 0;  
}  




// Linker Error:
#include <stdio.h>  
int Main()  
{  
    int a=78;  
    printf("The value of a is : %d", a);  
    return 0;  
}  




// Logical Error:
#include <stdio.h>  
int main()  
{  
   int sum=0; // variable initialization  
   int k=1;  
   for(int i=1;i<=10;i++); // logical error, as we put the semicolon after loop  
   {  
       sum=sum+k;  
       k++;  
   }  
printf("The  value of sum is %d", sum);  
    return 0;  
} 





// Semantic Error:
#include <stdio.h>  
int main()  
{  
    int a,b,c;  
    a=2;  
    b=3;  
    c=1;  
    a+b=c; // semantic error  
    return 0;  
}  