#include <iostream>

int main()
{
    std::string name;

    /*
        while loop
    */

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name); // Didn't use `std::getline(std::cin >> std::ws, name);`
                                                // Because name.empty() will handle that.
    }

    std::cout << "Hello " << name << std::endl;

    return 0;
}
