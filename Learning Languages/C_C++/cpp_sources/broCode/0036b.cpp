#include <iostream>
#include <string>
int searchArray(std::string arr[], int arraySize, std::string element)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    std::string food[] = {"pizza", "burger", "hotdog"};

    std::string myFood;
    std::cout << "Enter element to search for: ";
    std::getline(std::cin >> std::ws, myFood);

    int index = searchArray(food, sizeof(food)/sizeof(food[0]), myFood);

    if (index != -1) {
        std::cout << "Your search of " << myFood << " is at index " << index << std::endl;
    } else {
        std::cout << "Element not found on array." << std::endl;
    }
    
    return 0;
}
