#include <iostream>
#include <cmath>

int main()
{
    std::cout << "################################################################################" << std::endl;
    std::cout << "#################################  Calculator  #################################" << std::endl;
    std::cout << "################################################################################" << std::endl;
    double result, a = 0, b = 0;
    std::cout << std::endl;
    
    std::cout << "\t\tEnter the value of value No. 1: ";
    std::cin >> a;
    std::cout << "\t\tEnter the value of value No. 2: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "################################################################################" << std::endl;
    std::cout << "#################################  a = " << a << " #################################" << std::endl;
    std::cout << "#################################  b = " << b << " #################################" << std::endl;
    std::cout << "################################################################################" << std::endl;
    std::cout << "####################  Enter any character among +, -, *, /  ####################" << std::endl;
    std::cout << "################################################################################" << std::endl;
    char op = '\0';
    std::cout << "\t\t\tOperation: ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        result = a / (double)b;
        break;
    
    default:
        std::cout << "\t\t\t [ERROR] Invalid Operation identifier" << std::endl;
        return 1;
        break;
    }

    std::cout << "\t\t\tYour result: " << a << " " << op << " " << b << " = " << result << std::endl;
    
    return 0;
}
