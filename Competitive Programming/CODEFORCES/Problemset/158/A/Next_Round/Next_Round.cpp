#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    int personToBlame = 0;
    std::cin >> personToBlame;
    personToBlame--;

    int arr[num];
    int count = 0;

    for (int i = 0; i < num; i++)
    {
        std::cin >> arr[i];

    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= arr[personToBlame] && arr[i] > 0)
        {
            count++;
        }
    }
    
    
    std::cout << count << std::endl;

    return 0;
}
