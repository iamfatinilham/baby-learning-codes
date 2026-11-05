#include <iostream>

int main()
{
    /*
        do-while loop
    */
    int num = 0;

    do // This loops executes at-least once, no matter the condition is met or not
    {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);

    std::cout << "The number is: " << num << std::endl;
    
    return 0;
}
