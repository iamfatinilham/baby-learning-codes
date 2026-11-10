
// program0009.c: Conditional Logic: AND statements

#include<stdio.h>

int main()
{
    char ch; // Decleare a ch char variable

    printf("Type a character and press ENTER: "); // User Prompt
    
    ch = getchar(); // Get the character

    if ( ch >= 'A' && ch <= 'Z' ) { // If the value of ch is between A & Z,

        printf("The Character \"%c\" is a UPPERCASE character.", ch);
        
    } else if ( ch >= 'a' && ch <= 'z' ) { // If the value of ch is between a & z,
        
        printf("The Character \"%c\" is a LOWERCASE character.", ch);

    } else {

        printf("Invalid input");

    }
        
    return 0;
}
