
// program0028.c: GCD & LCM - 3

#include<stdio.h>

int main()
{
    int a = 0, b = 0; // Input Variable
    int a1 = 0, b1 = 0, t = 0; // Calculation Variable
    int gcd = 0, lcm = 0; // Output Variable

    printf("Type two numbers seperated by spaces then press enter: ");
    scanf("%d %d", &a, &b);

    a1 = a, b1 = b;

    if (a1 >= 1 && b1 >= 1) {

        if (a1 == 0) gcd = a1;
        else if (b1 == 0) gcd = b1;
        else {

            while (b1 != 0) { // Division Algorithm by Euclid
                t = b1;
                b1 = a1 % b1;
                a1 = t;
            }

            gcd = a1;
            lcm = (((a * b) / gcd));

        }

        printf(
            "\
            \nGreatest Common Divisor between %d & %d is %d\n\
            Least Common Multiple between %d & %d is %d\n", 
            a, b, gcd, a, b, lcm
        );

    }

    return 0;
}
