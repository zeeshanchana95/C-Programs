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
