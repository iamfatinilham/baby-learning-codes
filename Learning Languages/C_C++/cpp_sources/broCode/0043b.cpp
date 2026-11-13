#include <iostream>

/*
    Pass by value
    and
    Pass by Refernce
*/

void swapByValue(std::string x, std::string y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "[In function swapByValue] X: " << "(Address [Hexadecimal]) => " << &x << " | " << "(Value) => " << x << std::endl;
    std::cout << "[In function swapByValue] Y: " << "(Address [Hexadecimal]) => " << &y << " | " << "(Value) => " << y << std::endl;
}

void swapByReference(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "[In function swapByReference] X: " << "(Address [Hexadecimal]) => " << &x << " | " << "(Value) => " << x << std::endl;
    std::cout << "[In function swapByReference] Y: " << "(Address [Hexadecimal]) => " << &y << " | " << "(Value) => " << y << std::endl;
}

int main()
{
    
    std::cout << std::endl;
    std::cout << "[Original]" << std::endl;
    std::string x = "Water";
    std::string y = "Orange Juice";
    std::cout << "X: " << "(Address [Hexadecimal]) => " << &x << " | " << "(Value) => " << x << std::endl;
    std::cout << "Y: " << "(Address [Hexadecimal]) => " << &y << " | " << "(Value) => " << y << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    swapByValue(x, y);
    std::cout << "X: " << "(Address [Hexadecimal]) => " << &x << " | " << "(Value) => " << x << std::endl;
    std::cout << "Y: " << "(Address [Hexadecimal]) => " << &y << " | " << "(Value) => " << y << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    swapByReference(x, y);
    std::cout << "X: " << "(Address [Hexadecimal]) => " << &x << " | " << "(Value) => " << x << std::endl;
    std::cout << "Y: " << "(Address [Hexadecimal]) => " << &y << " | " << "(Value) => " << y << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
