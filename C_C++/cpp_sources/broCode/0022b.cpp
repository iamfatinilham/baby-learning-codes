#include <iostream>
#include <ctime>

int main()
{
    // Pseudo-Random: Not Random disguised as random (Kind of random but fully not random)
    srand(time(NULL)); // This generates randomness based on system-time
                                  // So, same system time means same random value

                                  // That's why it's called Pseudo Random

    int num = rand();

    int diceNum = (num % 6) + 1; // This makes the random number range [1 - 6]

    std::cout << diceNum << std::endl;

    return 0;
}
