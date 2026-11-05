#include <iostream>

int main()
{
    // #######################
    // ## Integer DATA Type ##
    // #######################
    int x; // Declaration
    x = 5; // Assignment

    int y = 6; // Both Declaration and Assignment at same time

    int sum = x + y;

    // Print the value of variable 'x'
    std::cout << x << std::endl;

    // Print the value of variable 'y'
    std::cout << "y = " << y << std::endl;

    // Just empty line
    std::cout << std::endl;
    std::cout << std::endl;

    // Print the value of variable 'sum'
    std::cout << "Sum = x + y = " << x << " + " << y << " = " << sum << std::endl;



    // ######################
    // ## Double DATA Type ##
    // ######################
    double price = 10.9;
    double cgpa = 3.97;
    std::cout << "CGPA = " << cgpa << std::endl;



    // ####################
    // ## Char DATA Type ##
    // ####################
    char grade = 'A';
    char currency = '$';
    std::cout << "Grade: " << grade << ", " << "Currency: " << currency << std::endl;



    // #######################
    // ## Boolean DATA Type ##
    // #######################
    /*
        Boolean represents just 2 states.
        Either
            true
        or
            false
    */
    bool power = true;
    bool isStudent = false;



    // ######################
    // ## String DATA Type ##
    // ######################
    /*
        Unlike C programming language, where there are no string datatype
        and you have to use Array of characters (char),

        The standard library in C++ provides a dedicated datatype
        for String `std::string`.
    */
    std::string name = "Fatin Ilham";
    std::string day = "Monday";
    std::string address = "Times Square, Manhattan, New York";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Day: " << day << std::endl;

    // Just empty line
    std::cout << std::endl;
    std::cout << std::endl;


    /*
        When console output, pay attention to spaces
    */
    std::cout << "Hello " << name << "," << std::endl;
    std::cout << "You live in " << address << "." << std::endl;
    std::cout << "Today's day is: " << day << "." << std::endl;


    return 0;

}
