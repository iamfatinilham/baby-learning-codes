#include <iostream>
#include <cmath>

int main()
{
    std::cout << 
        "std::max((double)5, (double)12) = " << std::max((double)5, (double)12)     << std::endl <<
        "std::min((double)5, (double)12) = " << std::min((double)5, (double)12)     << std::endl <<
        "pow((int)7, (int)3) = "             << pow((int)7, (int)3)                 << std::endl <<
        "sqrt((int)16) = "                   << sqrt((int)16)                          << std::endl <<
        "abs((int)-29) = "                   << abs((int)-29)                          << std::endl <<
        "round((double)3.65) = "             << round((double)3.65)                       << std::endl <<
        "ceil((double)3.65) = "              << ceil((double)3.65)                      << std::endl <<
        "floor((double)3.65) = "             << floor((double)3.65)                     << std::endl ;
    return 0;
}
