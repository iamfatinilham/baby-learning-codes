
// program0015.c: Loop: While loop - 1

#include<stdio.h>

int main()
{
    int n = 1;

    printf("Initial value of n is %d\n", n); // Print Initial value

    while (n <= 10) { // Value of n will go like 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    // The moment the value of n is 11, the instructions inside this
    // while loop won't be executed.

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
