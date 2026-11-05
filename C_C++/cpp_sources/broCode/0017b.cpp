#include <iostream>

int main()
{

    /*
        Use of Methods...
    */
   
    int lngth;
    std::cout << "Enter your name length: ";
    std::cin >> lngth;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    if (name.empty())
    {
        std::cout << "You didn't enter your name." << std::endl;
        return 1;
    } else {
        std::cout << "Hello, " << name << "!!!" << std::endl;
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Your Answer (Length): " << lngth << std::endl;
    std::cout << "Actual Answer: " << name.length() << std::endl;
    std::cout << std::endl;
    
    std:: cout << (
        name.length() == lngth ?
        "Yes, You gussed it right!!!" :
        "You guessed your length WRONG!!!"
    ) << std::endl;

    std::cout << std::endl;

    return 0;
}
