#include <iostream>
#include <iomanip>


int main()
{
    int n = 0;

    std::cin >> n;

    double arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        arr[i] = arr[i] * (double)0.01;
    }

    double sumArr = 0.0;

    for (double element : arr)
    {
        sumArr += element;
    }
    
    std::cout << std::setprecision(12) << std::fixed << (sumArr/(double)n)*100.00 << std::endl;

    return 0;
}
