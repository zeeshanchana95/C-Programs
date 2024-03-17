
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