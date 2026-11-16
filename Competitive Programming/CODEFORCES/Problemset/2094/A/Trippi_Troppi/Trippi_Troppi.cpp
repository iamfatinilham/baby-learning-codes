#include <iostream>

using ll = unsigned long long int;

int main()
{
    ll num = 0;
    std::cin >> num;

    std::string word[3];
    
    while (num--)
    {
        for (int i = 0; i < 3; i++) std::cin >> word[i];

        for (int i = 0; i < 3; i++) std::cout << word[i][0];

        std::cout << std::endl;
    }

    return 0;
}
