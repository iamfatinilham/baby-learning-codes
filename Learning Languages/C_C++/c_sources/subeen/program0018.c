
// program0018.c: Loop: Continue - 1

#include<stdio.h>

int main()
{
    int n = 0, limit; // Decleare & assign variable named n as integer whose value is 0
                      // Also, Only Decleare a variable named limit.

    // User Prompt
    printf("This program only prints the odd numbers starting from 1\nTO your desired limit.\nType the limit and press ENTER: ");
    
    // Let the user choose the value of variable named limit
    scanf("%d", &limit);
    printf("\n"); // Print an empty line

    while (n < limit) { // Continue the loop until (n >= limit)
        
        n++; // Equivalent of n = n + 1;

        if ( n % 2 == 0 ) {

            continue; // Instead of going below, start from the beginning of the loop

        }
    
        printf("%d\n", n);

    }

    return 0;
}
