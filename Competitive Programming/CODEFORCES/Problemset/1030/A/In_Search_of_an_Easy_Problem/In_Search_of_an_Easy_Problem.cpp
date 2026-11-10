#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 0;

    std::cin >> num;
    
    int sum = 0;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    if (!sum) {
        std::cout << "EASY" << std::endl;
    } else {
        std::cout << "HARD" << std::endl;
    }
    
    return 0;
}
