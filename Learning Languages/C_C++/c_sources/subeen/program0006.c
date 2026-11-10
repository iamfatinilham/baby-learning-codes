
// program0006.c: Conditional Logic: Basic - 2

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

    if (n < 0) { // Check if n is less than 0,
        
        // Then print that it is a negative number
        printf("The number %0.2lf is negative\n", n);

    } else if (n == 0) { // Check if n is equal to 0,

        // Then print that it is zero
        printf("The number %0.2lf is zero\n", n);

    } else { // Check if none of the conditions above are true,

        // Then print that it is a positive number
        printf("The number %0.2lf is positive\n", n);

    }
    
    return 0;
}
