#include <iostream>

int main(int argc, char const *argv[])
{
    int prtcpnt = 3;
    int num = 0;
    std::cin >> num;

    int arr[num][prtcpnt];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < prtcpnt; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int count[num], total = 0;

    for (int i = 0; i < num; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < prtcpnt; j++)
        {
            count[i] += arr[i][j];
        }

    }

    for (int i = 0; i < num; i++)
    {
        if (count[i] > 1)
        {
            total++;
        }
        
    }

    std::cout << total << std::endl;
    
    
    
    return 0;
}
