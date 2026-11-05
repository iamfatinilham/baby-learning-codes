#include <iostream>
#include <cmath> // Needed for pow(base, power) function

int main()
{
    const double PI = 3.141592; // With the "const" keywrd, you cannot change the value later

    double radius = 0;
    std::cout << "Enter the radius: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * pow(radius, 2);

    std::cout << "  Circumference: " << circumference << std::endl;
    std::cout << "  Area: " << area << std::endl;

    return 0;
}
