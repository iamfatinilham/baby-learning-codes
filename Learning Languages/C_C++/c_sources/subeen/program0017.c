
// program0017.c: Loop: Break - 1

#include<stdio.h>

int main()
{
    int n; // Decleare a variable named n
    int limit; // Decleare a variable named limit
    int autoExit; // Decleare a variable named autoExit
    

    // User prompt1 (Initial Value)
    printf("Type the value you want to start with then press ENTER: ");
    
    // Input function1, assign value of variable named n given by user
    scanf("%d", &n);
    printf("\n"); // Print an empty line

    // User prompt2 (limit)
    printf("Type how many times you want to increase then press ENTER: ");
    
    // Input function2, assign value of variable named limit given by user
    scanf("%d", &limit);
    printf("\n"); // Print an empty line


    // User prompt3 (Force exit)
    printf("Type force exit value then press ENTER: ");

    // Input function3, assign value of variable named autoExit given by user
    scanf("%d", &autoExit);
    printf("\n"); // Print an empty line
    
    
    if (n <= limit) { /* Check if value of variable n is
                        greater than the value of variable limit
                        */
        
        printf("Initial value of n is %d\n", n); // Print Initial value

        while (n <= limit) { // Continue the loop until n > limit

            printf("n => %d\n", n++);
            printf("Now n is %d\n\n", n);

            if (n > autoExit) { /* Check if value of variable n is
                                    greater than the value of variable
                                    autoExit
                                */
            
                printf("Your program broke out of it's loop when n was %d...", n);
                break; // Break out of the loop

            }

        }

    } else { // If upper condition is false... And, (n > limit),

        printf(
            "Initial value (%d) cannot be greater than final value (%d)...\nExiting with exit code 1\n", 
            n, 
            limit
        );
        printf("\n");
        return 1;

    }
    
    return 0;
}
