#include <iostream>

void saySomething(std::string name, int age)
{
    std::cout << std::endl;
    std::cout << "Happy Bithday to " << name << std::endl;
    std::cout << "You are now " << age << " years old" << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::string yourName;
    int yourAge = 0;

    std::cout << "Enter your name: ";
    std::getline(std::cin, yourName);
    std::cout << "Enter your age: ";
    std::cin >> yourAge;

    for (int i = 0; i < 3; i++)
    {
        saySomething(yourName, yourAge);
    }

    std::cout << std::endl;

    return 0;
}
