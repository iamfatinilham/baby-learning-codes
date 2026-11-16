#include <iostream>

using ll = unsigned long long int;

int main()
{
    ll num = 0;
    ll sze = 3;
    ll arr[sze];
    ll sum = 0;

    std::cin >> num;

    for (ll i = 0; i < num; i++)
    {
        sum = 0;
        for (ll &a : arr)
        {
            std::cin >> a;
            sum = sum + a;
        }

        if (sum % sze == 0 && arr[0] + 1 == arr[1] && arr[1] + 1 == arr[2])
        {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

    }
    

}
