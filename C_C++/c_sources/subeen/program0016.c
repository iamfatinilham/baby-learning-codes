
// program0016.c: Loop: While loop - 2

#include<stdio.h>

int main()
{
    int n = 1;
    
    int limit; // Decleare a variable named limit
    
    // User prompt
    printf("Type how many times you want to increase then press ENTER: ");

    // Input function, assign value of variable named limit given by user
    scanf("%d", &limit);
    printf("\n"); // Print an empty line
    
    printf("Initial value of n is %d\n", n); // Print Initial value

    while (n <= limit) { // Continue the loop until n > limit

        printf("n => %d\n", n++);
        printf("Now n is %d\n\n", n);

        /*

            Equivalent of:

            printf("n => %d\n", n); // 1st attemp
            n = n + 1;
            printf("Now n is %d\n", n);

        */

    }
    
    return 0;
}
