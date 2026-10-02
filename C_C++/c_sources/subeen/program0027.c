
// program0027.c: GCD & LCM - 2

#include<stdio.h>

int main()
{
    int a = 0, b = 0, x = 0, gcd = 0, lcm = 0;

    printf("Type two numbers seperated by spaces then press enter: ");
    scanf("%d %d", &a, &b);

    if (a >= 1 && b >= 1) {

        if (a < b) {
            x = a;
        } else {
            x = b;
        }

        for (; x >= 1; x--) {
            if (a % x == 0 && b % x == 0) {
                break;
            }
        }

        gcd = x;
        lcm = (((a * b) / gcd));

        printf(
            "\
            \nGreatest Common Divisor between %d & %d is %d\n\
            Least Common Multiple between %d & %d is %d\n", 
            a, b, gcd, a, b, lcm
        );
        
    }

    return 0;
}
