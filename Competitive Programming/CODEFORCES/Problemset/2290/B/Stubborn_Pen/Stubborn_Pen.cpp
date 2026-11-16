#include <iostream>

using ll = unsigned long long int;

int main()
{
    ll tst = 0;
    ll turn = 0;
    std::string str;
    char color = 'R';
    ll manual = 0;

    std::cin >> tst;

    for (int i = 0; i < tst; i++)
    {
        color = 'R';
        std::cin >> turn;
        std::getline(std::cin >> std::ws, str);
        
        for (int n = 0; n < str.length(); n++)
        {
            if (str[n] != color)
                manual++;

            
            if (str[n] == 'B') {
                color = 'R';
            } else {
                color = 'B';
            }
        }
        
        std::cout << manual << std::endl;
        manual = 0;
    }
    
}
