
// Chapter 01: A Tutorial Introduction

// 1.1 Getting Started
    //printf() = to print something to the screen
    // \n = to add new line
    // \t = to add tab
    // \b = for backspace
    // \" = for inserting " double quotes
    // \\ = for inserting backslash
    // \r = for carriage return

    // gcc Filename.c = to compile c file in windows (cc Hello.c for unix)
    // ./a.exe = to run c file (./a.out for unix)


#include<stdio.h>

int main() {
    printf("Hello World");

    return 0;
}




#include<stdio.h>

int main() {
    printf("Hello World!\n");

    return 0;
}




#include<stdio.h>

int main() {
    printf("Hello World!
    
    "); //error: missing terminating " character

    return 0;
}




#include<stdio.h>

int main() {
    printf("hello, ");
    printf("world");
    printf("\c"); //warning: unknown escape sequence: '\c'
    //hello, worldc

    return 0;
}




// 1.2 Variables and Arithmetic Expressions
    // convert fahrenheit to celsius: C = (5/9) (F - 32)
    
#include<stdio.h>

/* print fahrenheit to celcius table
   for fahr 0, 20, 30, .... 300
*/
//integer version

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit of temperature table
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}






// convert fahrenheit to celsius: C = (5/9) (F - 32)
//floating point version
    
#include<stdio.h>

/* print fahrenheit to celcius table
   for fahr 0, 20, 30, .... 300
*/

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit of temperature table
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

// NOTE:
    // Among others, printf also recognizes %o for octal, %x for hexadecimal, %c for
    // character, %s for character string, and %% for % itself.





// 1.2 Variables and Arithmetic Expressions
    // convert fahrenheit to celsius: C = (5/9) (F - 32)
    
#include<stdio.h>

/* print fahrenheit to celcius table
   for fahr 0, 20, 30, .... 300
*/

int main() {
    
    printf("==================\n");
    printf("Fahr to Cels table\n");
    printf("==================\n");
    
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit of temperature table
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}








    
#include<stdio.h>

/* print celsius to fahrenheit table
   for celsius 0, 20, 30, .... 300
*/

int main() {

    printf("==================\n");
    printf("Cels to Fahr table\n");
    printf("==================\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 100;    //upper limit of temperature table
    step = 20;      // step size

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius + 32.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}








// 1.3 The for statement:

    
#include<stdio.h>

/* print fahrenheit to celsius table
   for fahr 0, 20, 30, .... 300
*/

int main() {

    int fahr;
    printf("==================\n");
    printf("Fahr to Celc table\n");
    printf("==================\n");

    for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }

    return 0;
}

















// 1.4 Symbolic Constants:
    // "#define" used to create symbolic constants, as they are not variables so they do not appear in declarations.
    // Note that there is no semicolon at the end of #define statement

/* print celsius to fahrenheit table
   for celsius 0, 20, 30, .... 300
*/

#include<stdio.h>

#define LOWER   0   /* lower limit of table */
#define UPPER   300 /* upper limit of table */
#define STEP    20  /* step size */

int main() {

    int fahr;
    printf("==================\n");
    printf("Fahr to Celc table\n");
    printf("==================\n");

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }

    return 0;
}







