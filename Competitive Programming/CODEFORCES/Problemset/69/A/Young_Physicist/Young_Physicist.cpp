#include <iostream>
#include <cmath>

using ll = long long int;

int main()
{
    int num = 0;
    std::cin >> num;

    int isEqubrilium = 1;
    const int dimension = 3;
    
    int arr[num][dimension];
    int sum[dimension];
    
    std::fill(sum, sum + (sizeof(sum) / sizeof(sum[0])), 0);
    
    // Input
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            std::cin >> arr[i][j];
            sum[j] += arr[i][j];
        }
    }

    // Check
    for (int i = 0; i < dimension; i++)
    {
        if (sum[i])
        {
            isEqubrilium = 0;
            break;
        }
        
    }
    
    // Result
    std::cout << (
            isEqubrilium ? "YES" : "NO"
        ) << std::endl;
    
    
    return 0;
}
