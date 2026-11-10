#include <iostream>

/*
    Memory addresses
*/
int main(int argc, char const *argv[])
{
    std::string name = "Alex";
    int age = 21;
    bool isStudent = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &isStudent << std::endl;

    return 0;
}
