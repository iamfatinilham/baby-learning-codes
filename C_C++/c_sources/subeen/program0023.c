
// program0023.c: Loop: For loop - 5

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    
    for (a = 1; a <= 3; a++) {

        for (b = 1; b <= 3; b++) {

            if (b != a) {

                for (c = 1; c <= 3; c++) {

                    if (c != a && c != b) {

                        printf("    %d, %d, %d\n", a, b, c);

                    }

                }

            }

        }

    }

    printf("\n\n---------------\n\n\n");
    // AGAIN

    a = 1, b = 1, c = 1; // Just assigning values because, it was already decleared


    for (a = 1; a <= 3; a++) {

        for (b = 1; b <= 3; b++) {

            for (c = 1; c <= 3; c++) {

                if (a != b && b != c && c != a) {

                    printf("    %d, %d, %d\n", a, b, c);

                }

            }

        }

    }

    return 0;
}
