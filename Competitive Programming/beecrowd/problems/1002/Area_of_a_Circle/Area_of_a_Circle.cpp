#include <iostream>
#include <iomanip>
#include <cmath>

const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double rad = 0;
    std::cin >> rad;
    std::cout  << "A=" << std::setprecision(4) << std::fixed << PI * pow(rad, 2) << std::endl;

    return 0;
}
