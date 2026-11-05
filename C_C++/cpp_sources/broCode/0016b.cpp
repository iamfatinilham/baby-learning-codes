#include <iostream>

int main()
{
    char unit;
    double temp = 0.0;
    std::cout << "****** Temperature Conversion ******" << std::endl;

    std::cout << "  C => Celsius" << std::endl;
    std::cout << "  F => Farenheit" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    do
    {
        std::cout << "What temp would you like to convert to (c/f): ";
        std::cin >> unit;
        std::cout << std::endl;

        if (unit == 'c' || unit == 'C') {

            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;
            temp = (5 * (temp - 32)) / 9; /* FORMULA: C/5 = (F-32)/9 */

            std::cout << std::endl;
            std::cout << "The temperature in Celsius is: " << temp << " degree celsius" << std::endl;

            break;

        } else if (unit == 'f' || unit == 'F') {

            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temp;
            temp = ((9.0 * temp) / 5.0) + 32.0; /* FORMULA: C/5 = (F-32)/9 */

            std::cout << std::endl;
            std::cout << "The temperature in Fahrenheit is: " << temp << " degree Fahrenheit" << std::endl;

            break;

        } else {

            std::cout << "Invalid Option. Try again" << std::endl;

        }
    } while (true);


    return 0;
}
