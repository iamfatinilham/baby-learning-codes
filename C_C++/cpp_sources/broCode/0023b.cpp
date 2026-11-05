#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int randNum = (rand() % 6) + 1; // This makes the random number range [1 - 6]

    switch (randNum)
    {
    case 1:
        std::cout << "You won a sticker!" << std::endl;
        break;

    case 2:
        std::cout << "You won a free lunch!" << std::endl;
        break;

    case 3:
        std::cout << "You won a free book!" << std::endl;
        break;

    case 4:
        std::cout << "You won a free gift card!" << std::endl;
        break;

    case 5:
        std::cout << "You won a Concert ticket!" << std::endl;
        break;

    default:
        std::cout << "BAD LUCK" << std::endl;
        break;
    }

    std::cout << "randnum: " << randNum << std::endl;

    return 0;
}
