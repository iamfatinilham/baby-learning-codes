
// program0013.c: Data Type: char - 3

#include<stdio.h>

int main()
{
    printf(
        "The integer value difference between\nA small and a capital character\n Is always: %d\n",
        (int)('a' - 'A')
        );

    
    char ch1 = 'A', ch2 = 'a';
    int i = 1;


    while (i <= 26) {

        printf(
            "'%c' ==> %d  |  '%c' ==> %d | (int)%c - (int)%c = %d\n",
            ch1,  (int)ch1,  ch2, (int)ch2,  ch2,     ch1, (int)(ch2 - ch1) // For easy visualization
        );
        
        ch1++; // Equivalent of ch1 = ch1 + 1;
        ch2++; // Equivalent of ch1 = ch2 + 1;
        i++; // Equivalent of i = i + 1;

    }
    
    return 0;
}
