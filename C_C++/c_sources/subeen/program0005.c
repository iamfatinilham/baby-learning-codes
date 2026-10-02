
// program0005.c: Conditional Logic: Basic - 1

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
    
    if (n > 10) { // Check if number greater than 10,
        
        // Then print that it is really greater than 10
        printf("The number %0.1lf is greater than 10\n", n);

    } else if (n == 10) { // Check if number equal to 10,

        // Then print that it is really equal to 10
        printf("The number %0.1lf is equal to 10\n", n);

    } else { // Check if none of the conditions above are true,

        // Then print that it is really less than 10
        printf("The number %0.1lf is less than 10\n", n);

    }    
    
    return 0;
}
