#include <iostream>

double square(double length)
{
    double result = length * length;
    return result; /* You could also do with only one line without using above line */

                   /* return length * length; */
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}

std::string nameConcat(std::string firstName, std::string lastName)
{
    return firstName + " " + lastName;
}

int main()
{
    std::string string1, string2, fullName;
    double num;

    std::cout << "Enter a length: ";
    std::cin >> num;

    std::cout << "Enter your first name: ";
    std::getline(std::cin >> std::ws, string1);

    std::cout << "Enter your last name: ";
    std::getline(std::cin >> std::ws, string2);

    double area = square(num);
    double volume = cube(num);

    std::cout << "Hello, " << nameConcat(string1, string2) << "!!!" << std::endl; 
    std::cout << "Area = " << area << std::endl;
    std::cout << "Volume = " << volume << std::endl;

    return 0;
}
