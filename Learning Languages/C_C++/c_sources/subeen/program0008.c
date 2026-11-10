
// program0008.c: Conditional Logic: Basic - 4

#include<stdio.h>

int main()
{
    // Decleare num as a integer data type
    int num;
    
    // User Prompt
    printf("Pick a number: ");
    
    // Input function, assign value of num given by user
    scanf("%d", &num);
    printf("\n"); // Print an empty line

    if ( ((num % 2)) == 0 ) { // Check if the remainder of num divided by 2 is equal to zero,
    
        // Then print that it is an even number
        printf("This number \"%d\" is even", num);
    
    } else { // Check if none of the conditions above are true,
    
        // Then print that it is an odd number
        printf("This number \"%d\" is odd", num);
    
    }    
    
    return 0;
}
