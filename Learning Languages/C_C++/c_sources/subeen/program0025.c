
// program0025.c: Equation Calculator - 2

#include<stdio.h>

int main()
{
    /*
    =================Decleare section=================
    */
    float a1 = 0, b1 = 0, c1 = 0, d1 = 0; // Input variables
    float a2 = 0, b2 = 0, c2 = 0, d2 = 0; // Input variables
    float a3 = 0, b3 = 0, c3 = 0, d3 = 0; // Input variables

    float de1 = 0, de2 = 0;                               // Calculation variables
    float x1 = 0, y1 = 0, z1 = 0, x2 = 0, y2 = 0, z2 = 0; // Calculation variables

    float x = 0, y = 0, z = 0; // Output variables

    int i, limit;
    int in_method = 0;
    char conf = 'n';


    /*
    =================User Input section=================
    */

    //printf("Before WHILE LOOP 0,\nValue of in_method is %d\n", in_method); // For Debugging purposes...
    while (in_method != 1 && in_method != 2) {
        //printf("During WHILE LOOP 0,\nValue of in_method = %d\n\n", in_method); // For Debugging purposes...
        printf("\n\nSelect calculation method:\n\n\
        1. AnX + BnY = Cn (Two variables: X, Y)\n\n\
        2. AnX + BnY + CnZ = Dn (Three variables: X, Y, Z)\n\n\n"
    );
    printf("Your choice: ");
    scanf("%d", &in_method);
    printf("\n\n");
    }

    //printf("After WHILE LOOP 0,\nValue of in_method = %d\n\n", in_method); // For Debugging purposes...

    if (in_method == 1) {
        limit = 7;
    } else if (in_method == 2) {
        limit = 13;
    }

    //printf("limit = %d\n\n", limit); // For Debugging purposes...

    while ((char)conf != 'y' || (char)conf == 'Y') {
        //printf("START WHILE LOOP 1\n\n"); // For Debugging purposes...

        for (i = 0; i <= limit; i++) {
            //printf("START FOR LOOP\n\n"); // For Debugging purposes...
            //printf(" i = %d\n", i); // For Debugging purposes...
            if (i < limit) {
                printf("\nCalculate matrix:\n");
                printf("-----------------\n");
                if (in_method == 1) {
                    printf(
                        "\n\
            a1=(%0.2f)   +   b1=(%0.2f)   =   c1=(%0.2f)\n\
            a2=(%0.2f)   +   b2=(%0.2f)   =   c2=(%0.2f)\n\n\n", 
            a1, b1, c1, 
            a2, b2, c2
                    );
                } else if (in_method == 2) {
                    printf(
                        "\n\
            a1=(%0.2f)   +   b1=(%0.2f)   +   c1=(%0.2f)   =   d1=(%0.2f)\n\
            a2=(%0.2f)   +   b2=(%0.2f)   +   c2=(%0.2f)   =   d2=(%0.2f)\n\
            a3=(%0.2f)   +   b3=(%0.2f)   +   c3=(%0.2f)   =   d3=(%0.2f)\n\n\n", 
            a1, b1, c1, d1,
            a2, b2, c2, d2,
            a3, b3, c3, d3
                    );
                }
            }

            if (in_method == 2) {
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
                    printf("Enter the value of d1: ");
                    scanf("%f", &d1);
                    printf("\n");
                    continue;
                } else if (i == 4) {
                    printf("Enter the value of a2: ");
                    scanf("%f", &a2);
                    printf("\n");
                    continue;
                } else if (i == 5) {
                    printf("Enter the value of b2: ");
                    scanf("%f", &b2);
                    printf("\n");
                    continue;
                } else if (i == 6) {
                    printf("Enter the value of c2: ");
                    scanf("%f", &c2);
                    printf("\n");
                    continue;
                } else if (i == 7) {
                    printf("Enter the value of d2: ");
                    scanf("%f", &d2);
                    printf("\n");
                    continue;
                } else if (i == 8) {
                    printf("Enter the value of a3: ");
                    scanf("%f", &a3);
                    printf("\n");
                    continue;
                } else if (i == 9) {
                    printf("Enter the value of b3: ");
                    scanf("%f", &b3);
                    printf("\n");
                    continue;
                } else if (i == 10) {
                    printf("Enter the value of c3: ");
                    scanf("%f", &c3);
                    printf("\n");
                    continue;
                } else if (i == 11) {
                    printf("Enter the value of d3: ");
                    scanf("%f", &d3);
                    printf("\n");
                    continue;
                }
            } else {
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
            }

            if (i == limit) {
                printf("Confirm values [ y / N (default) ]: ");
            }

            conf = getchar(); // OR, scanf("%c", &conf);
            //// Only the damn god knows why this scanf & getchat 
            //// doesn't work when i == ((limit - 1))
            //// Tore all my hairs appart...

            //printf("END FOR LOOP\n"); // For Debugging purposes...
        }
        //printf("END WHILE LOOP 1\n"); // For Debugging purposes...
    }


    /*
    =================Calculation section=================
    */
    
    if (in_method == 2) {
        de2 = ((a1*b2*c3) - (a1*b3*c2) - (b1*a2*c3) + (b1*a3*c2) + (c1*a2*b3) - (c1*a3*b2)); // Math error will be checked based upon this...
    } else {
        de1 = ((a1*b2) - (a2*b1)); // Math error will be checked based upon this...
    }

    //printf("\nde1 = %f\n", de1); // For Debugging purposes...
    //printf("\nde2 = %f\n", de2); // For Debugging purposes...
    
    if (in_method == 2 && (int)de2 != 0) {
        x2 = ((((d1*b2*c3) - (d1*b3*c2) - (b1*d2*c3) + (b1*d3*c2) + (c1*d2*b3) - (c1*d3*b2)) / de2)); // Output variables
        y2 = ((((a1*d2*c3) - (a1*d3*c2) - (d1*a2*c3) + (d1*a3*c2) + (c1*a2*d3) - (c1*a3*d2)) / de2)); // Output variables
        z2 = ((((a1*b2*d3) - (a1*b3*d2) - (b1*a2*d3) + (b1*a3*d2) + (d1*a2*b3) - (d1*a3*b2)) / de2)); // Output variables
        x = x2, y = y2, z = z2;
    
    } else if ((int)de1 != 0) {
        x1 = ((((b2*c1) - (b1*c2)) / de1)); // Output variables
        y1 = ((((a1*c2) - (a2*c1)) / de1)); // Output variables
        x = x1, y = y1, z = z1;
    }




    /*
    =================Result Output section=================
    */
    printf("\n\n");
    printf("========================================\n");
    printf("==============  ANSWER  ================\n");
    printf("========================================\n\n");
    printf("========================================\n");
    if (((in_method == 1) && ((int)de1 != 0)) || ((in_method == 2) &&((int)de2 != 0))) {
        printf("====                                ====\n");
        printf("              x = %+0.4f               \n", x);
        printf("              y = %+0.4f               \n", y);
        if (in_method == 2) {
            printf("              z = %+0.4f               \n", z);
        }
        printf("====                                ====\n");
    } else {
        printf("====                                ====\n");
        printf("====           MATH ERROR           ====\n");
        printf("====                                ====\n");
    }
    printf("========================================\n");

    
    return 0;
}
