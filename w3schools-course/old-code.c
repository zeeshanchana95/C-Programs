#include <stdio.h> //header file/library to work with input/output 
            //white space to make program more readable
int main() {
  printf("Hello World!"); //printf() for printing text to the screen
  return 0;
}




#include <stdio.h> //header file/library to work with input/output 
            //white space to make program more readable
int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%d\n", sizeof(myInt)); //lu = long unsigned int 
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    return 0;
}


#include <stdio.h> //header file/library to work with input/output 
            //white space to make program more readable
int main() {
    // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);
    
    return 0;
}



#include <stdio.h> 
    int main() {
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);
    
    return 0;
}






#include <stdio.h> 
#include <stdbool.h>

int main() {
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d", isProgrammingFun);   // Returns 1 (true)
    printf("%d", isFishTasty);        // Returns 0 (false)
    
    return 0;
}








#include <stdio.h> 
#include <stdbool.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
    return 0;
}



#include <stdio.h> 
#include <stdbool.h>

int main() {
   int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    printf("Old enough to vote!");
    } else {
    printf("Not old enough to vote.");
    }
    return 0;
}





#include <stdio.h> 
#include <stdbool.h>

int main() {
    int x = 20;
    int y = 18;
    if (x > y) {
       printf("x is greater than y");
    }
    return 0;
}




#include <stdio.h> 
#include <stdbool.h>

int main() {
    int time = 20;
    if (time < 18) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    // Outputs "Good evening."
    return 0;
}





#include <stdio.h> 
#include <stdbool.h>

int main() {
    int time = 22;
    if (time < 10) {
    printf("Good morning.");
    } else if (time < 20) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    // Outputs "Good evening."
    return 0;
}




#include <stdio.h> 
#include <stdbool.h>

int main() {
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");
    return 0;
}






#include <stdio.h> 
#include <stdbool.h>

int main() {
   
    int doorCode = 1337;
    if (doorCode == 1337) {
        printf("Correct code.\nThe door is now open.");
    } else {
        printf("Wrong code.\nThe door remains closed.");
    }


    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
    printf("The value is a positive number.");
    } else if (myNum < 0) {
    printf("The value is a negative number.");
    } else {
    printf("The value is 0.");
    }



    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    printf("Old enough to vote!");
    } else {
    printf("Not old enough to vote.");
    }




    int myNum = 5;

    if (myNum % 2 == 0) {
    printf("%d is even.\n", myNum);
    } else {
    printf("%d is odd.\n", myNum);
    }


    return 0;
}













#include <stdio.h> 
#include <stdbool.h>

int main() {
   int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}

// Outputs "Thursday" (day 4)

    return 0;
}





#include <stdio.h> 
#include <stdbool.h>

int main() {
   int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

// Outputs "Looking forward to the Weekend"

    return 0;
}








#include <stdio.h> 
#include <stdbool.h>

int main() {
   int day = 6;

switch (day) {
  case 6:
    printf("Today is Saturday");

  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

// Outputs "Looking forward to the Weekend"

    return 0;
}







#include <stdio.h> 
#include <stdbool.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}





#include <stdio.h> 
#include <stdbool.h>

int main() {
   int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);

    return 0;
}






#include <stdio.h> 

int main() {
  int i;

    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}





#include <stdio.h> 

int main() {
    int i;

    for (i = 0; i < 10; i++) {
    if (i == 4) {
        continue;
    }
    printf("%d\n", i);
    }
    return 0;
}





#include <stdio.h> 

int main() {
    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}








#include <stdio.h> 

int main() {
    char greetings[] = "Hello World!";
    printf("%s", greetings);
    
    return 0;
}






#include <stdio.h> 

int main() {

    char greetings[] = "Hello World!";
    printf("%c", greetings[0]);
    
    return 0;
}






#include <stdio.h> 

int main() {

   char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s", greetings);
    // Outputs Jello World! instead of Hello World!
    
    return 0;
}






#include <stdio.h> 

int main() {

    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i) {
        printf("%c\n", carName[i]);
    }
    return 0;
}



#include <stdio.h> 

int main() {

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greetings);
    
    return 0;
}






#include <stdio.h> 

int main() {

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings));   // Outputs 13
    printf("%lu\n", sizeof(greetings2));  // Outputs 13
    
    return 0;
}





#include <stdio.h> 

int main() {

    int myAge = 43;
    printf("%p", &myAge); // Outputs 0x7ffe5367e044
    return 0;
}






#include <stdio.h> 

int main() {
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);

    return 0;
}



#include <stdio.h> 

int main() {
    // Create an int and a char variable
    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);

    return 0;
}






#include <stdio.h> 

int main() {
    char fullName[30];

    printf("Type your full name: \n");
    scanf("%s", &fullName);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John

    return 0;
}






#include <stdio.h> 

int main() {
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe


    return 0;
}






#include <stdio.h> 

int main() {
    
    int myAge = 43; // an int variable

    printf("%d", myAge);  // Outputs the value of myAge (43)
    printf("%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)


    return 0;
}






#include <stdio.h> 

int main() {

    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    return 0;
}









#include <stdio.h> 

int main() {
    
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);
    return 0;
}

// When used in declaration (int* ptr), it creates a pointer variable.
// int* myNum;

// When not used in declaration, it act as a dereference operator.
// int *myNum;







#include <stdio.h> 
// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function

  // Outputs "I just got executed!"
  return 0;
}






#include <stdio.h> 
// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  myFunction(); // call the function
  myFunction(); // call the function

  // Outputs 
  //"I just got executed!"
  //"I just got executed!"
  //"I just got executed!"
  return 0;
}






#include <stdio.h> 

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Hello Liam
// Hello Jenny
// Hello Anja









#include <stdio.h> 

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.








#include <stdio.h> 

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}










#include <stdio.h> 
int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}

// Outputs 8 (5 + 3)







#include <stdio.h> 

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;

  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  printf("Fahrenheit: %.2f\n", f_value);

  // Print the result
  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}








#include <stdio.h> 
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

// The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, when written correctly, recursion can be a very efficient and mathematically-elegant approach to programming.








#include <stdio.h> 
#include <math.h>


int main() {
    int sum(int k);
    printf("%f", ceil(1.4));
    printf("%f", floor(1.4));
    printf("%f", pow(4, 3));

    /*
    abs(x)	Returns the absolute value of x
    acos(x)	Returns the arccosine of x
    asin(x)	Returns the arcsine of x
    atan(x)	Returns the arctangent of x
    cbrt(x)	Returns the cube root of x
    cos(x)	Returns the cosine of x
    exp(x)	Returns the value of Ex
    sin(x)	Returns the sine of x (x is in radians)
    tan(x)	Returns the tangent of an angle
    */


    return 0;
}









/*
File Handling
In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function:

FILE *fptr
fptr = fopen(filename, mode);
FILE is basically a data type, and we need to create a pointer variable to work with it (fptr). For now, this line is not important. It's just something you need when working with files.

To actually open a file, use the fopen() function, which takes two parameters:

Parameter	Description
filename	The name of the actual file you want to open (or create), like filename.txt
mode	    A single character, which represents what you want to do with the file (read, write or append):
    w - Writes to a file
    a - Appends new data to a file
    r - Reads from a file

*/

/*
Create a File
    To create a file, you can use the w mode inside the fopen() function.
    The w mode is used to write to a file. However, if the file does not exist, it will create one for you:
*/



#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Close the file
    fclose(fptr);
    
    return 0;
}


/*
Tip: If you want to create the file in a specific folder, just provide an absolute path:
fptr = fopen("C:\directoryname\filename.txt", "w");
*/






/*
Write To a File
Let's use the w mode from the previous chapter again, and write something to the file we just created.

The w mode means that the file is opened for writing. To insert content to it, you can use the fprintf() function and add the pointer variable (fptr in our example) and some text:
*/


#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Some text");

    // Close the file
    fclose(fptr);


    return 0;
}



// Note: If you write to a file that already exists, the old content is deleted, and the new content is inserted. This is important to know, as you might accidentally erase existing content.











/*
Append Content To a File
If you want to add content to a file without deleting the old content, you can use the a mode.

The a mode appends content at the end of the file
*/

#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in append mode
    fptr = fopen("filename.txt", "a");

    // Append some text to the file
    fprintf(fptr, "\nHi everybody!");

    // Close the file
    fclose(fptr);



    return 0;
}









/*
Read From file
*/

#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");

    // Store the content of the file
    char myString[100];

    // Read the content and store it inside myString
    fgets(myString, 100, fptr);

    // Print the file content
    printf("%s", myString);

    // Close the file
    fclose(fptr);

    return 0;
}

// Note: The fgets function only reads the first line of the file. If you remember, there were two lines of text in filename.txt.

// To read every line of the file, you can use a while loop:









/*
Read From file
*/

#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");

    // Store the content of the file
    char myString[100];

    // Read the content and print it
    while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }

    // Close the file
    fclose(fptr);

    return 0;
}


// If you try to open a file for reading that does not exist, the fopen() function will return NULL.

// Tip: As a good practice, we can use an if statement to test for NULL, and print some text instead (when the file does not exist):







/*
Read From file
*/

#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("loremipsum.txt", "r");

    // Print some text if the file does not exist
    if(fptr == NULL) {
        printf("Not able to open the file.");
    }

    // Close the file
    fclose(fptr);


    return 0;
}







/*
Read From file
*/

#include <stdio.h> 
#include <fstream.h>

int main() {
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");

    // Store the content of the file
    char myString[100];

    // If the file exist
    if(fptr != NULL) {

        // Read the content and print it
        while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
        }

        // If the file does not exist
    } else {
        printf("Not able to open the file.");
    }

    // Close the file
    fclose(fptr);


    return 0;
}









/*
Structures
    Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

    Unlike an array, a structure can contain many different data types (int, float, char, etc.).

*/

/*
Create a Structure
    You can create a structure by using the struct keyword and declare each of its members inside curly braces:

        struct MyStructure {   // Structure declaration
            int myNum;           // Member (int variable)
            char myLetter;       // Member (char variable)
        }; // End the structure with a semicolon
    
    To access the structure, you must create a variable of it.
        Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:

        Create a struct variable with the name "s1":
            struct myStructure {
                int myNum;
                char myLetter;
            };

            int main() {
                struct myStructure s1;
                return 0;
            }

    Access Structure Members
        To access members of a structure, use the dot syntax (.):
        
*/

#include<stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};


int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}












//Now you can easily create multiple structure variables with different values, using just one structure:

#include<stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};


int main() {
    // Create different struct variables
    struct myStructure s1;
    struct myStructure s2;

    // Assign values to different struct variables
    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    return 0;   
}












/*
What About Strings in Structures?
    Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:
*/

#include<stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  s1.myString = "Some text";

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
}
    // An error will occur:
        // prog.c:12:15: error: assignment to expression with array type









/*
However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString, like this:
*/

#include<stdio.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // s1.myString = "Some text"; //error

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text"); 

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}












/*
Simpler Syntax
    You can also assign values to members of a structure variable at declaration time, in a single line.

    Just insert the values in a comma-separated list inside curly braces {}. Note that you don't have to use the strcpy() function for string values with this technique:
*/

#include<stdio.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}

// Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).










/*
Copy Structures
You can also assign one structure to another.

In the following example, the values of s1 are copied to s2:

Example
struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;

*/

#include<stdio.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;
    s2 = s1;

    return 0;   
}










/*
Modify Values
    If you want to change/modify a value, you can use the dot syntax (.).

    And to modify a string value, the strcpy() function is useful again:

*/

#include<stdio.h>
#include<string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}









/*
Modifying values are especially useful when you copy structure values:

*/

#include<stdio.h>
#include<string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};

    // Create another structure variable
    struct myStructure s2;

    // Copy s1 values to s2
    s2 = s1;

    // Change s2 values
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");

    // Print values
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);

  return 0;
}











/*
Ok, so, how are structures useful?
    Imagine you have to write a program to store different information about Cars, such as brand, model, and year. What's great about structures is that you can create a single "Car template" and use it for every cars you make. See below for a real life example.
*/

/*
Real-Life Example
    Use a structure to store different information about Cars:
*/


#include<stdio.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}





















