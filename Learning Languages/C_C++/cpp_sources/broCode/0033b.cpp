#include <iostream>

int main()
{
    std::string students[] = {"Jessica", "Lucia", "Sabrina", "Alex", "Mark", "Sam", "John"};

    std::cout << sizeof(students) << std::endl;
    for (int i = 0; i < (sizeof(students) / sizeof(std::string)); i++)
    {
        std::cout << students[i] << std::endl;
    }
    
    return 0;
}
