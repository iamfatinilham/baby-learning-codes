#include<stdio.h>

int main()
{

//  The type of variable (In this case, Integer, Can only store positive and negative integer numbers)
//   ║
//   ▼
    int  x; // Declearing variable
//       ▲
//       ║
//  The given name of the variable (In this case, x)
    
    
    x = 5; // Assigning value to variable
//      ▲
//      ║
//  The given value of the variable.
//  In this case, value of x will be 10


    printf("Value of x is %d\n", x);
    //                     ▲
    //                     ║
    // Here, "%d" is one of many format specifiers out there (%d, %f, %lf, %c, %s)
    
    
    int y = 10; // Declearing & Assigning value to variable at the same time
    
    printf("Value of y is %d\n", y);

//  Float type (Can store floating point number. Example: 1.12, 2.22, 1.00003 etc.)
//   ║
//   ▼
    float z = 15;

    printf("Value of z is %d\n", z);

    int a, b, c, d; // Declearing multiple variables (All variables are int type)

    float e = 1, f = 4, g = 3, h = 102, i, j, k, l; // Declearing & Assigning multiple variables at the same time

    a = 23, b = 3249, c = 4390, d = 637; // Assigning multiple variables
    
    i = 16, j = 89, k = 90, l = 67; // Assigning multiple variables
    
    printf("\n \
        a = %d\n \
        b = %d\n \
        c = %d\n \
        d = %d\n \
        e = %0.3f\n \
        f = %0.3f\n \
        g = %0.3f\n \
        h = %0.3f\n \
        i = %0.3f\n \
        j = %0.3f\n \
        k = %0.3f\n \
        l = %0.3f\n \
        ", 
        a, b, c, d, e, f, g, h, i, j, k , l);

        /*
            
            Here, this is a format specifier (%d, %f, %lf, %c, %s)
            %0.3f
            
            Here, 
            0 => number of leading spaces
            . => the floating point
            3 => number of digits printed after floating point
            
        */

    printf("\n");

    int sum1 = a + b;
    printf("sum1 is equal to %d\n", sum1);
    printf("a + b is equal to %d\n", a + b);

    float sum2 = (float)sum1 + z;

    printf("sum2 is equal to %d\n", sum2);
    return 0;
}
