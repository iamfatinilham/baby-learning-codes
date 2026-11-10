#include <iostream>

int main()
{
    // Implicit Type Conversion (Cast) => Done by the compiler (Automatic)
    // Explicit Type Conversion (Cast) => Done by you

    int x = 3.141592; // Implicit Cast
    double y = (int)3.141592; // Exlpicit Cast
    char ch1 = 65;

    int correct = 8;
    int total_questions = 10;
    double fraction_in_percent = ( correct / (double)total_questions ) * 100;
    

    std::cout << x << std::endl;
    return 0;
}
