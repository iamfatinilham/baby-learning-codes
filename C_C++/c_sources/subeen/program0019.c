
// program0019.c: Loop: For loop - 1

#include<stdio.h>

int main()
{
    int n, limit, i;

    // User Prompt
    printf("Type any two number seperated by spaces and press ENTER : ");

    // Let user assign values of variable n & limit
    scanf("%d %d", &n, &limit);
    printf("\n"); // Print an empty line

    for ( i = 1; i <= limit; i++) {

        printf("%d X %d = %d\n", n, i, n*i);

    }
    
    return 0;
}
