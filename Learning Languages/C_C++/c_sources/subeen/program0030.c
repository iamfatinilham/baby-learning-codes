
// program0030.c: Arrays - 2

#include<stdio.h>

int main()
{
    int ara1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int ara2[10];

    int i, j;

    for (i = 0, j = 9; i < 10; i++, j--)
    {
        ara2[j] = ara1[i];
    }

    for (i = 0; i < 10; i++) {
        ara1[i] = ara2[i];
    }

    for (i = 0; i < 10; i++) {
        if (i == 0) {
            printf("%dst element is %3d\n", i+1, ara1[i]);
        } else if (i == 1) {
            printf("%dnd element is %3d\n", i+1, ara1[i]);
        } else if (i == 2) {
            printf("%drd element is %3d\n", i+1, ara1[i]);
        } else if (i == 9) {
            printf("%dth element is %d\n", i+1, ara1[i]);            
        } else {
            printf("%dth element is %3d\n", i+1, ara1[i]);
        }
    }
    
    return 0;
}
