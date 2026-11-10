#include <iostream>

/*
    fill function
*/

int main(int argc, char const *argv[])
{
    int size = 105;

    std::string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (2 * (size/3)), "burger");
    fill(foods + (2 * (size/3)), foods + size, "hotdog");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }

    return 0;
}
