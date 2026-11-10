#include <iostream>
#include <cstring>
#include <string>

int main()
{
    int num = 0;
    std::cin >> num;

    std::string becauseItsCplusplus[num];

    for (int i = 0; i < num; i++)
    {
        std::getline(std::cin >> std::ws, becauseItsCplusplus[i]);

        if (becauseItsCplusplus[i].size() > 10)
        {
            std::cout << becauseItsCplusplus[i].at(0) << becauseItsCplusplus[i].size() - 2 << becauseItsCplusplus[i].at(becauseItsCplusplus[i].size() - 1) << std::endl;
        } else {
            std::cout << becauseItsCplusplus[i] << std::endl;
        }

    }

    return 0;
}
