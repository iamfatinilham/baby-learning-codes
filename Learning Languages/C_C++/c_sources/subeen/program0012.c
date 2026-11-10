
// program0012.c: Data Type: char - 2

#include<stdio.h>

int main()
{
    int n;

    printf("Type the desired value of n and press ENTER: ");
    scanf("%d", &n);
    printf("\n"); // Print an empty line


    char ch1 = 'a'; // Decleare & Assign a ch1 char variable whose value is 'a'
    printf("Variable ch1 value is %c\n", ch1);

    char ch2 = 'A'; // Decleare & Assign a ch2 char variable whose value is 'A'
    printf("Variable ch2 value is %c\n", ch2);

    printf("\n\n");

    printf("Integer value of ch1 is: %d\n", (int)ch1); // Typecasting variable ch1 from char to int, then printing it
    printf("Integer value of ch2 is: %d\n", (int)ch2); // Typecasting variable ch2 from char to int, then printing it

    printf("\n\n");

    printf("After adding %d to ch1 and ch2,\n", n);
    ch1 += n; // Equivalent of ch1 = ch1 + n;
    ch2 += n; // Equivalent of ch2 = ch2 + n;
    printf("Again, Variable ch1 value is %c\n", ch1);
    printf("Again, Variable ch2 value is %c\n", ch2);

    printf("\n\n");

    printf("Now, Integer value of ch1 is: %d\n", (int)ch1); // Typecasting variable ch1 from char to int, then printing it
    printf("Now, Integer value of ch2 is: %d\n", (int)ch2); // Typecasting variable ch2 from char to int, then printing it

    return 0;
}
