
// program0010.c: Conditional Logic: OR statements

#include<stdio.h>

int main()
{
    char ch;  // Decleare a ch char variable

    printf("Type a character and press ENTER: ");
    ch = getchar(); // Get the character

    if (
        ch == 'a' || ch == 'A' || // Check if ch is equal to a or A
        ch == 'e' || ch == 'E' || // Check if ch is equal to e or E
        ch == 'i' || ch == 'I' || // Check if ch is equal to i or I
        ch == 'o' || ch == 'O' || // Check if ch is equal to o or O
        ch == 'u' || ch == 'U'    // Check if ch is equal to u or U
    ) {

        printf("The Character \"%c\" is a Vowel", ch);

    } else {

        printf("The Character \"%c\" is a consonant", ch);

    }
    
    
    return 0;
}
