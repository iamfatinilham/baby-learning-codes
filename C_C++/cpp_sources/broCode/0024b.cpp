#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    int num;
    int guess;
    int tries = 1;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Number guessing game" << std::endl;

    do
    {
        /* Debug code (Uncomment for debug): */

        // std::cout << "Correct NUM: " << num << std::endl;

        std::cout << std::endl;
        std::cout << "Enter a guess between 1 - 100: ";
        std::cin >> guess;

        if (guess < num) {

            std::cout << "TOO LOW!!!" << std::endl;
            std::cout << "It is higher than " << guess << std::endl;
            tries++;

        } else if (guess > num) {

            std::cout << "TOO HIGH!!!" << std::endl;
            std::cout << "It is lower than " << guess << std::endl;
            tries++;

        }

    } while (guess != num);

    std::cout << "Correct!!! You did it within " << tries << " of tries." << std::endl;
    std::cout << std::endl;

    return 0;
}
