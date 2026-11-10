#include <iostream>

int main()
{
    int turn = 0;
    long long int a = 0, b = 0;
    std::cin >> turn;

    for (int i = 0; i < turn; i++)
    {
        std::cin >> a >> b;

        if (a % b == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << b - (a % b) << std::endl;
        }
    }

    return 0;
}
