
// program0029.c: Arrays - 1

#include<stdio.h>

int main()
{
    int ara[10] = {
        10, 
        20, 
        30, 
        40, 
        50, 
        60, 
        70, 
        80, 
        90, 
        100
    };

    int i;

    printf("Array in correct order:\n-----------------------\n");
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            printf("%dst element is %3d\n", i+1, ara[i]);
        } else if (i == 1) {
            printf("%dnd element is %3d\n", i+1, ara[i]);
        } else if (i == 2) {
            printf("%drd element is %3d\n", i+1, ara[i]);
        } else {
            printf("%dth element is %3d\n", i+1, ara[i]);
        }
    }


    printf("\n=======================\n\n");
    

    printf("Array in reverse order:\n-----------------------\n");
    for (i = ((10 - 1)); i >= 0; i--)
    {
        if (i == 0) {
            printf("%dst element is %3d\n", i+1, ara[i]);
        } else if (i == 1) {
            printf("%dnd element is %3d\n", i+1, ara[i]);
        } else if (i == 2) {
            printf("%drd element is %3d\n", i+1, ara[i]);
        } else {
            printf("%dth element is %3d\n", i+1, ara[i]);
        }
    }
    
    return 0;
}
