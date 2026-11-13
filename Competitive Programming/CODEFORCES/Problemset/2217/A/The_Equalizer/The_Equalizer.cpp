#include <iostream>

using ll = unsigned long long int;

void verdct(int anyCond)
{
    std::cout << (
        anyCond ? "YES" : "NO"
    ) << std::endl;
}

void specialMove(ll array[], ll arraySize, int value)
{
    for (int m = 0; m < arraySize; m++)
    {
        array[m] = array[m] - value;
    }
    
}

int main()
{
    ll num;
    std::cin >> num;
    
    ll sze = 0;
    ll spclVal = 0;

    for (ll i = 0; i < num; i++)
    {
        int canDoSpcl = 1;
        std::cin >> sze;
        ll arr[sze];
        std::cin >> spclVal;

        for (int j; j < sze; j++)
        {
            std::cin >> arr[j];
            if (arr[j] < spclVal) canDoSpcl = 0;
        }

        if (canDoSpcl)
            specialMove(arr, sizeof(arr)/sizeof(arr[0]), spclVal);

        
        

        

    }
    


    return 0;
}
