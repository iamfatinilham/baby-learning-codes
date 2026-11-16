#include <iostream>
#include <string>

using ll = unsigned long long int;

void bubble_sort(std::string &name, ll nameSize)
{
    //std::cout << "Func Received: " << name << std::endl;
    char temp;
    for (ll i = 0; i < nameSize - 1; i++)
    {
        for (ll j = 0; j < nameSize - i - 1; j++)
        {
            if (name[j] > name[j+1])
            {
                temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }

        }

    }

    //std::cout << "Func sorted: " << name << std::endl;
    
}



int main()
{
    ll num = 0, length = 0;
    std::cin >> num;

    std::string name[2];

    for (ll a = 0; a < num; a++)
    {
        std::cin >> length;
        for (ll m = 0; m < 2; m++) std::cin >> name[m];

        //for (ll m = 0; m < 2; m++) std::cout << name[m] << std::endl;

        for (ll m = 0; m < 2; m++) bubble_sort(name[m], name[m].size());

        std::cout << (
            name[0] == name[1] ? "YES" : "NO"
        ) << std::endl;

    }

}
