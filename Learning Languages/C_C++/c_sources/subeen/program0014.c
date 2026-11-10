
// program0014.c: Loop: While loop - 0

#include<stdio.h>

int main()
{
    int n = 1;

    printf("Initial value of n is %d\n", n); // Print Initial value
    
    printf("n => %d\n", n++); // 1st attemp
    printf("Now n is %d\n\n", n);

    /*

        Equivalent of:

        printf("n => %d\n", n); // 1st attemp
        n = n + 1;
        printf("Now n is %d\n\n", n);

    */
    
    printf("n => %d\n", n++); // 2nd attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 3rd attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 4th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 5th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 6th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 7th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 8th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 9th attemp
    printf("Now n is %d\n\n", n);
    
    printf("n => %d\n", n++); // 10th attemp
    printf("Now n is %d\n\n", n);

    return 0;
}
