#include <iostream>

using ull = unsigned long long int;

void sort(ull array[], int size) // The F-ing Array decays
{ /*
   * The F-ing Bubble sort
   */
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < ((size - 1) - i); j++)
        {
            if (array[j] > array[j+1])
            {
                std::swap(array[j], array[j+1]);
            }
            
        }
        
    }
    
}

int doSomething(ull array[], int size)
{
    sort(array, size);

    if (array[0] + array[1] <= array[2]) {

        return array[1];

    } else if (array[0] + array[1] > array[2]) {

        return array[2] - array[0];

    } else {

        return 0;

    }
    
}


int main()
{
    const int arr_size = 3;
    int num = 0;
    std::cin >> num;

    ull arr[arr_size];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            std::cin >> arr[j];
        }
        
        std::cout << doSomething(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;
    }

    return 0;
}
