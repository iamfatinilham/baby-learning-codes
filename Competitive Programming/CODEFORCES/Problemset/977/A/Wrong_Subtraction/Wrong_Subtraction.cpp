#include <iostream>

int main()
{
    unsigned long long int num = 0;
    std::cin >> num;

    int turn = 0;
    std::cin >> turn;

    for (int i = 0; i < turn; i++)
    {
        if (num % 10 != 0)
        {
            num--;
        } else {
            num /= 10;
        }
    }

    std::cout << num << std::endl;

    return 0;
}
