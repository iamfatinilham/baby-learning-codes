#include <iostream>
#include <iomanip>

/*
    Arrays
*/

int main()
{
    std::string cars[] = {"Ford", "Audi", "Kia", "Toyota"};
    double prices[] = {1000.00, 3200.00, 500.01, 300.99};

    cars[2] = "BMW"; // Replaces index 2 (Element number 3) with "BMW"

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Car " << i + 1 << ": " << cars[i] << " | " << "Price: $" << std::setprecision(2) << std::fixed << prices[i] << std::endl;
    }

    return 0;
}
