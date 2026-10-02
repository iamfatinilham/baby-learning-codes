// 0003.cpp

#include <iostream>

// Global variable
const double PI = 3.141592;
const long long speedOfLight = 3e9;

int main()
{
    double radius = 2.0;
    std::cout << "Radius = " << radius << std::endl;

    std::cout << "PI = " << PI << std::endl;
    
    std::cout << "Speed of Light = " << speedOfLight << std::endl;
    
    std::cout << "Area = " << PI*radius*radius << " Square Centemeteres." << std::endl;
    
    return 0;
}
