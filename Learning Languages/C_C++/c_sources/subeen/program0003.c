
// program0003.c: Data type: Basic math operation

#include<stdio.h>

int main()
{
    // Decleare Variable dividend & divisor as a integer data type
    int dividend, divisor;

    // User Prompt1
    printf("Dividend: ");

    // Input function, assign value of dividend given by user
    scanf("%d", &dividend);
    printf("\n"); // Print an empty line
    
    
    // User Prompt2
    printf("Divisor: ");

    // Input function, assign value of divisor given by user
    scanf("%d", &divisor);
    printf("\n"); // Print an empty line


    // Core Logic to get remainder
    printf(
        "The remainder is: %d\n", // Print the remainder
        ( dividend - ( divisor * ( dividend / divisor ) ) ) // ==> Remainder Logic inside printf
        // Dividend - (Divisor * Quotient) ==> Remainder
    );

    return 0;
}
