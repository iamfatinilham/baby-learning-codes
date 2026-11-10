#include <iostream>

/*
    Bubble sort
*/

void sort(int array[], int arraySize, std::string order);

int main(int argc, char const *argv[])
{
    int arr[] = {12, 34, 43, 34, 3, 35, 5, 90};

    sort(arr, sizeof(arr)/sizeof(arr[0]), "ascend");

    for (int element : arr)
    {
        std::cout << element << " ";
    }

    return 0;
}

void swapAdjacent(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
    Even though, we passed by value instead of
    pass by reference, the compiler passes arrays
    by reference in C/C++ language
*/
void sort(int array[], int arraySize, std::string order)
{
    int temp;

    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = 0; j < ( (arraySize - 1) - i ); j++)
        {
            if (order == "descend") {
                if (array[j] < array[j + 1]) // Sorts in descending order
                {
                    swapAdjacent(&array[j], &array[j+1]);
                }
            } else {
                if (array[j] > array[j + 1]) // Sorts in descending order
                {
                    swapAdjacent(&array[j], &array[j+1]);
                }
            }
        }
    }
}
