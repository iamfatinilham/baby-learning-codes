
// program0021.c: Loop: For loop - 3

#include<stdio.h>

int main()
{
    int n, i, limit;

    // User Prompt and Input
    printf("Type a positive number and press ENTER: ");
    scanf("%d", &limit);
    printf("\n");


    if (limit >= 0) { // Check if user entered a positive number

        for (n = 1; n <= limit ; n++) {

            for (i = 1; i <= 10; i++) {

                printf("%d X %d = %d\n", n, i, n*i);

            }

            if (n < limit) {

                printf("\n");

            }

        }
    
    } else {

        printf("Cannot do with negative number...\n");
        return 1;
        
    }
    
    return 0;
}
