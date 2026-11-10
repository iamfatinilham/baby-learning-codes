
// program0031.c: Arrays - 3

#include<stdio.h>

int main()
{
    int ara[] = {
        (int)10, 
        (int)20, 
        (int)30, 
        (int)40, 
        (int)50, 
        (int)60, 
        (int)70, 
        (int)80, 
        (int)90, 
        (int)100, 
        (int)110
    };

    //// Initial user prompt
    //int conf;
    //printf("\nHow many array indexes do you prefer for this demo?\n");
    //printf("====================================\n");
    //printf("    1. 10\n");
    //printf("    2. 11\n\n");
    //printf("    Answer: ");
    //scanf("%d", &conf);
    

    int i, j, temp;

    int ara_indexes = (( sizeof(ara) / sizeof(ara[0]) )); // Get the size of array

    printf("\nsizeof(ara) == %d\nsizeof(ara[0]) == %d\n\n", sizeof(ara), sizeof(ara[0])); // For Debugging purposes...
    printf("\"ARRAY INDEXES\" = %d,\n\"ARRAY INDEXES / 2\" = %d (Integer Part)\n\n", ara_indexes, ara_indexes/2); // For Debugging purposes...

    printf("  Original Array: \n-------------------\n");
    
    for (i = 0; i < ara_indexes; i++) {
        if (i == 0) {
            printf("%dst element is %3d\n", i+1, ara[i]);
        } else if (i == 1) {
            printf("%dnd element is %3d\n", i+1, ara[i]);
        } else if (i == 2) {
            printf("%drd element is %3d\n", i+1, ara[i]);
        } else if (i == 9) {
            printf("%dth element is %d\n", i+1, ara[i]);            
        } else {
            printf("%dth element is %3d\n", i+1, ara[i]);
        }
    }


    // The conversion logic
    for (
        i = 0, j = ara_indexes - 1; 
        i < ara_indexes/2; // Need to divide by two
        i++, j--
    ) {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    
    

    printf("\n  Reversed Array: \n-------------------\n");

    for (i = 0; i < ara_indexes; i++) {
        if (i < 9) {
            printf("%dst element is %3d\n", i+1, ara[i]);
        } else {
            printf("%dth element is %d\n", i+1, ara[i]);
        }
    }

    return 0;
}
