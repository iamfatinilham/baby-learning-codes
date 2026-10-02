
// program0022.c: Loop: For loop - 4

#include<stdio.h>

int main()
{
    int n, m, i, j;

    // User Prompt: 1 - Define Turns
    printf("\nDefine turns: ");
    scanf("%d", &n);

    printf("\n");

    for (i = 1; i <= n; i++) {

        // User Prompt: 2 - Define Limits [START]
        
        // If statement to add extra line for great appearence.
        if (i > 1) { printf("\n"); } // One-Liner if statements.

        printf("Turn Number: ( %d / %d )\n-------------\n", i, n); // User Prompt: 2 - Header
        printf("Define limit: "); // User Prompt: 2 -  Main
        scanf("%d", &m); // User Input: 2
        printf("\n");

        // User Prompt: 2 - Define Limits [END]


        if (m <= 11) { // If, the user inputs invalid number ( < 11),
                       // (m is less than or equal 11)
                       // This is to prevent waste of turns

            i--; // Undo one step (Equivalent of i = i - 1;)

            // Alert user's mistake by printing it to console.
            printf("Invalid number \"%d\"!!!\nThe input(limit) should be greater than 11!!!\n\n", m);
            
            continue; // Go at the begining of for loop.

        }
        
        for (j = 11; j <= m; j++) { // This makes sure, that none of the output is
                                    // fully divisable by 11.
            
            if (j % 11 == 0) {
                continue;
            }
            
            printf("%d\n", j);
            
        }
        
    }

    return 0;
}
