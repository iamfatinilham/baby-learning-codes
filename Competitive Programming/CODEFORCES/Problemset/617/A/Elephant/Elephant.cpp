#include <iostream>

int main()
{
    unsigned long long int num = 0;
    std::cin >> num;

    int count = 0;

    for (unsigned long long int i = 5; i >= 0 && num > 0; i--)
    {
        count = count + (num / i);
        num %= i;
    }

    std::cout << count << std::endl;
    return 0;
}
