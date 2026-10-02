
// program0020.c: Loop: For loop - 2

#include<stdio.h>

int main()
{
    int n = 5;
    printf("\nInitial value:\nn = %d\n\n", n);



    for (int n = 0; n >= 5; n++) {
        printf("This FOR loop won't happen\n");
        printf("So, these won't be printed...\n");
    }

    printf("After a for loop that never happened,\n");
    printf("\n          n = %d\n\n", n);
    printf("Even after a loop that never happened,\nvalue of n changed\n\n");
    printf("That means the loop section was touched\nBut NEVER TOUCHED PROPERLY...\n\n");
    printf("----------------------------------------------\n\n\n");

    int i = 1;
    printf("Assigned value of i = 1 before entering another loop\n\n");
    int limit = 50;

    for (n = 35; n < limit; n++ && i++) {

        if (i == 1) {

            printf("First loop, i = %d\n\n", i);

        } else if (i > 1) {

            printf("After completing previous loop...\n\n    i = %d\n\n\n", i);

        }



        printf("Running on loop No. %d\nValue of n is %d\nvalue of i is %d\n\n", i, n, i);



        if (i >= 5) {

            printf("Broken out of loop after loop No. %d out of %d\nBecause of that break statement in this IF condition\n", i, limit);
            break;

        }

        printf("Loop NO. %d COMPLETED...\n\n", i);
        printf("----------END LOOP %d-------------\n\n\n", i);

    }

    return 0;
}
