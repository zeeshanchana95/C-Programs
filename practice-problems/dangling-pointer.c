/*
Dangling Pointer:

Sometimes the programmer fails to initialize the pointer with a valid address, then this type of initialized pointer is known as a dangling pointer in C.

Dangling pointer occurs at the time of the object destruction when the object is deleted or de-allocated from memory without modifying the value of the pointer. In this case, the pointer is pointing to the memory, which is de-allocated. 

The dangling pointer can point to the memory, which contains either the program code or the code of the operating system.

If we assign the value to this pointer, then it overwrites the value of the program code or operating system instructions; in such cases, the program will show the undesirable result or may even crash. If the memory is re-allocated to some other process, then we dereference the dangling pointer will cause the segmentation faults.

Let's understand the dangling pointer through some C programs.
1. Using free() function to de-allocate the memory.

2. Variable goes out of the scope
When the variable goes out of the scope then the pointer pointing to the variable becomes a dangling pointer.

3. Function call
Now, we will see how the pointer becomes dangling when we call the function.

Avoiding Dangling Pointer Errors
The dangling pointer errors can be avoided by initializing the pointer to the NULL value. If we assign the NULL value to the pointer, then the pointer will not point to the de-allocated memory. Assigning NULL value to the pointer means that the pointer is not pointing to any memory location.
*/

// 1. Using free() function to de-allocate the memory.
// #include <stdio.h>  
// int main()  
// {  
//    int *ptr=(int *)malloc(sizeof(int));  
//    int a=560;  
//    ptr=&a;  
//    free(ptr);  
//    return 0;  
// }  


// 2. Variable goes out of the scope
// #include<stdio.h>  
// int main()  
// {  
//     char *str;  
//     {  
//         char a = ?A?;  
//         str = &a;  
//     }  
//     // a falls out of scope   
//     // str is now a dangling pointer   
//     printf("%s", *str);  
// }  


// 3. Function call
#include <stdio.h>  
int *fun(){  
    int y=10;  
    return &y;  
}  
int main()  
{  
    int *p=fun();  
    printf("%d", *p);  
    return 0;  
} 


