
// program0007.c: Conditional Logic: Basic - 3

#include<stdio.h>

int main()
{
    // Decleare n as a long-float data type
    double n;

    // User Prompt
    printf("Type any number you want then press enter: ");

    // Input function, assign value of n given by user
    scanf("%lf", &n);
    printf("\n"); // Print an empty line


    if (n < 30) { // Check if n is less than 30,

        // Then print that it is really less than 30
        printf("The given number %0.2lf is less than 30\n", n);

    }
    

    if (n < 50) { // Again check if n is less than 50,

        // Then print that it is really less than 50
        printf("The given number %0.2lf is less than 50\n", n);

    }    


    return 0;
}
