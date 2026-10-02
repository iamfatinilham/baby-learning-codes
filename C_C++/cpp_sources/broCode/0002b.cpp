// 0002.cpp

#include <iostream>
#include <stdio.h>

int main()
{
    int x;
    x = 5;

    int y = 6;
    int sum = x + y;

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "sum = " << sum << '\n';
    

    /*
        ###############
        ## DataTypes ##
        ###############
    */
    
    // Double (8 Byte) (Floating point number)
    double price = 10.89;
    double temperature = 25.1;


    // Char (1 Byte) (Single character)
    char grade = 'A';
    char currecySign = '$';

    std::cout << "The price is " << currecySign << price << '\n';
    std::cout << "Your grade is " << grade << std::endl;


    // Boolean (Either "true" or "false")
    bool isStduent = false;
    bool powerStatus = true;


    // String (Array of characters) (Objects that represents a sequence of text)
    std::string name = "Alex";


    std::cout << "Your name is " << name << "." << std::endl;

    std::cout << "Bye Bye" << std::endl;

    return 0;
}
