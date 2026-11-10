
// program0004.c: Data type: Basic math operation, Input-Output

#include<stdio.h>

int main()
{
    // Decleare num1 & num2 as long-float data type
    double num1, num2;

    // User Prompt
    printf(
        "Type any two numbers you want seperated by spaces, then press enter: "
    );
    
    // Input function, assign values of num1 and num2 given by user
    scanf("%lf %lf", &num1, &num2);
    printf("\n"); // Print an empty line
    
    // Assigning mathematical sign
    char addition[] = "+", substraction[] = "-", multiplication[] = "*", division[] = "/";

    // Typecasting num1 and num2 to integer data type, then Addition logic & Printing it
    printf("%d %s %d = %d\n", (int)num1, addition, (int)num2, (int)num1+(int)num2);
    
    // Typecasting num1 and num2 to integer data type, then Substraction logic & Printing it
    printf("%d %s %d = %d\n", (int)num1, substraction, (int)num2, (int)num1-(int)num2);
    
    // Typecasting num1 and num2 to integer data type, then Multiplication logic & Printing it
    printf("%d %s %d = %d\n", (int)num1, multiplication, (int)num2, (int)num1*(int)num2);
    
    // Division logic & Printing it
    printf("%0.2lf %s %0.2lf = %0.4lf\n", num1, division, num2, num1/num2);

    return 0;
}
