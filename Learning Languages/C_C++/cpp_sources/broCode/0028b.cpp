#include <iostream>

/*
    Local and Global Variables
*/

int myNum = 1; // Global Variable

void printMyNum(int number)
{
    std::cout << "\n ### Went In printMyNum function" << std::endl;
    std::cout << "myNum (In function called printMyNum by value 'number' [Will print Argument Value]): "  << number << std::endl;

    std::cout << "myNum (before local assigning [Will print Global Value]): " << myNum << std::endl;

    int myNum = 3; // Local Variable (only bound to printMyNum Function)
    std::cout << "myNum (AFTER local assigning  [Will print Local Value]): " << myNum << std::endl;

    std::cout << "myNum (Force print global using scope resolution operator \"::\" [Will print Global Value]): " << ::myNum << std::endl;

    std::cout << " ### Went Out printMyNum function\n" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "myNum (before local assigning [Will print Global Value]): " << myNum << std::endl;


    int myNum = 2; // Local Variable (Only bound to 'main' function)
    std::cout << "myNum (AFTER local assigning  [Will print Local Value]): " << myNum << std::endl;


    std::cout << "myNum (Force print global using scope resolution operator \"::\" [Will print Global Value]): " << ::myNum << std::endl;

    printMyNum(myNum);

    return 0;
}
