
/*Copy input to output: 1st version*/
// #include <stdio.h>
// main() {
//     int c;
//     c = getchar();
//     while (c!= EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

// #include <stdio.h>
// main() {
//     int c;
    
//     while ((c = getchar()) != EOF) {
//         putchar(c);
//     }
// }


// Exercise 1-6. Verify that the expression getchar( ) ! = EOF is 0 or l. a
// Exercise 1-7. Write a program to print the value of EOF. a
#include <stdio.h>
main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    if( c == EOF) {
        printf("End of file: %d", c);
    }
}


