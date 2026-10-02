
// program0024.c: Equation Calculator - 1

#include<stdio.h>

int main()
{
    /*
    =================Decleare section=================
    */
    float a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0; //Input variables

    float x1, y1, de = 0; // Calculation variable

    float x = 0, y = 0; //Output variables

    int i;
    char conf = 'n';


    /*
    =================User Input section=================
    */
    while ((char)conf != 'y' || (char)conf == 'Y') {
        //printf("START WHILE LOOP\n\n"); // For Debugging purposes...

        for (i = 0; i <= 7; i++) {
            //printf("START FOR LOOP\n\n"); // For Debugging purposes...
            //printf(" i = %d\n", i); // For Debugging purposes...
            if (i < 7) {
        printf("\nCalculate matrix:\n");
        printf("-----------------\n");
        printf(
            "\n\
            a1=(%0.2f)   +   b1=(%0.2f)   =   c1=(%0.2f)\n\
            a2=(%0.2f)   +   b2=(%0.2f)   =   c2=(%0.2f)\n\n\n", 
            a1, b1, c1, 
            a2, b2, c2
        );
            }

            if (i == 0) {
                printf("Enter the value of a1: ");
                scanf("%f", &a1);
                printf("\n");
                continue;
            } else if (i == 1) {
                printf("Enter the value of b1: ");
                scanf("%f", &b1);
                printf("\n");
                continue;
            } else if (i == 2) {
                printf("Enter the value of c1: ");
                scanf("%f", &c1);
                printf("\n");
                continue;
            } else if (i == 3) {
                printf("Enter the value of a2: ");
                scanf("%f", &a2);
                printf("\n");
                continue;
            } else if (i == 4) {
                printf("Enter the value of b2: ");
                scanf("%f", &b2);
                printf("\n");
                continue;
            } else if (i == 5) {
                printf("Enter the value of c2: ");
                scanf("%f", &c2);
                printf("\n");
                continue;
            }

            if (i == 7) {
                printf("Confirm values [ y / N (default) ]: ");
                //printf("Before updating %c\n", conf);
            }
            
            conf = getchar(); // OR, scanf("%c", &conf);
            //printf("After updating %c\n", conf);
            //// Only the damn god knows why this scanf & getchat 
            //// doesn't work when i == 6
            //// Tore all my hairs appart...

            //printf("END FOR LOOP\n"); // For Debugging purposes...
        }
        //printf("END WHILE LOOP\n"); // For Debugging purposes...
    }


    /*
    =================Calculation section=================
    */
    de = ((a1*b2) - (a2*b1)); // Math error will be checked based upon this...

    //printf("de = %f\n", de); // For Debugging purposes...

    if ((int)de != 0) { // Prevent unnecessary calculations
        x1 = ((((b2*c1) - (b1*c2)) / de)); // Output variables
        y1 = ((((a1*c2) - (a2*c1)) / de)); // Output variables
        x = x1, y = y1;
    }




    /*
    =================Result Output section=================
    */
    printf("\n\n");
    printf("========================================\n");
    printf("==============  ANSWER  ================\n");
    printf("========================================\n\n");
    printf("========================================\n");
    if ( (int)de != 0 ) {
        printf("====                                ====\n");
        printf("              x = %+0.4f               \n", x);
        printf("              y = %+0.4f               \n", y);
        printf("====                                ====\n");
    } else {
        printf("====                                ====\n");
        printf("====           MATH ERROR           ====\n");
        printf("====                                ====\n");
    }
    printf("========================================\n");


    return 0;
}
