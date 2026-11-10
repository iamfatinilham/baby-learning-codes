#include <iostream>
#include <iomanip>

/*
    Passing array to function
*/

double getTotal(double array[], int arraySize)
{
    double sum = 0.0;

    for(int i = 0; i < arraySize; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99};

    double total = getTotal(prices, sizeof(prices)/sizeof(prices[0]));

    std::cout << "Total price: $" << std::setprecision(2) << std::fixed << total << std::endl;

    return 0;
}
