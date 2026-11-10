#include <iostream>

int main()
{
    /*
        Ternary Operator format:
        [Condition] ? [If True] : [If False]
    */
    int num = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    num % 2 == 0 ? std::cout << "EVEN NUMBER!\n" : std::cout << "ODD NUMBER!\n";

    bool hungry = false;
    std::cout << "Are you hungry? Ans[0/1]: ";
    std::cin >> hungry;


    /*
        IMPORTANT!!!
        NEW way to write!!!
    */
    std::cout << (hungry == true ? "You are hungry" : "You are NOT hungry") << std::endl;

    // NOTE: You can also write like this:
    /*

    std::cout << (
        hungry == true ? "You are hungry" : "You are NOT hungry"
    ) << std::endl;

    */

    std::cout << "Program ENDED" << std::endl;

    return 0;
}
