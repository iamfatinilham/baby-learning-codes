#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    std::string name;

    double salary = 0.0;
    double sold = 0.0;

    std::getline(std::cin >> std::ws, name);
    std::cin >> salary;
    std::cin >> sold;

    std::cout << "TOTAL = R$ " << std::setprecision(2) << std::fixed << salary + (sold * (15/(double)100)) << std::endl;

    return 0;
}
