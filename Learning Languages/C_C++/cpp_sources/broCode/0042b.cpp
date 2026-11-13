#include <iostream>

/*
    Memory addresses
*/
int main(int argc, char const *argv[])
{
    std::string name = "Alex";
    int age = 21;
    bool isStudent = true;

    // The '&' before a variable means the (address-of) operator

    std::cout << "The memory address of variable name (in hexadecimal) is: " << &name << std::endl;
    std::cout << "The memory address of variable age (in hexadecimal) is: " << &age << std::endl;
    std::cout << "The memory address of variable isStudent (in hexadecimal) is: " << &isStudent << std::endl;

    return 0;
}
