#include <iostream>

int main()
{
    int input = 0;

    std::cin >> input;

    if (input != 2 && input % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
