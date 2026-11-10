#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    int sender_arr[num];
    int receiver_arr[num];

    for (int i = 0; i < num; i++)
    {
        std::cin >> sender_arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        receiver_arr[sender_arr[i] - 1] = i+1;
    }

    for (int i = 0; i < num; i++)
    {
        std::cout << receiver_arr[i] << " ";
    }
    


    return 0;
}
