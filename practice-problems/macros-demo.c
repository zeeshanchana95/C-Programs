/*
A macro is a segment of code which is replaced by the value of macro. Macro is defined by #define directive. There are two types of macros:

Object-like Macros
Function-like Macros
Object-like Macros
The object-like macro is an identifier that is replaced by value. It is widely used to represent numeric constants. For example:

#define PI 3.14  
Here, PI is the macro name which will be replaced by the value 3.14.

Function-like Macros
The function-like macro looks like function call. For example:

#define MIN(a,b) ((a)<(b)?(a):(b))    
Here, MIN is the macro name.

C Predefined Macros
ANSI C defines many predefined macros that can be used in c program.

No.	Macro	Description
1	_DATE_	represents current date in "MMM DD YYYY" format.
2	_TIME_	represents current time in "HH:MM:SS" format.
3	_FILE_	represents current file name.
4	_LINE_	represents current line number.
5	_STDC_	It is defined as 1 when compiler complies with the ANSI standard.


Advantages of Using Macros:
There are various advantages of Macros in C. Some main advantages of C macros are as follows:

Code reuse: By allowing developers to declare a piece of code just once and use it several times, macros help to promote modular programming and minimize code duplication.

Code abbreviation: Macros make it possible to write clear, expressive code that is simpler to read and comprehend the intentions of the programmer.

Performance Optimization: By minimizing function call overhead, macros may be utilized to optimize code execution. For instance, it is possible to inline brief pieces of code using function-like macros.

Using macros, conditional compilation enables distinct sections of the code to be included or removed based on predetermined circumstances. Debugging or platform-specific code both benefit from this functionality.


*/

#include<stdio.h>  
 int main(){    
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n", __STDC__ );      
   return 0;  
 } 
 
 /*
Output:
File :.\macros-demo.c
Date :Mar 26 2024
Time :11:45:27
Line :48
STDC :1
*/