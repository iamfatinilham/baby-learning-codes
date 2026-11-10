#include <iostream>

/*
    2D and Multi-dimentional array
*/

int main()
{
            std::string cars[][3] = {
    /*[rows] [columns (Required)]*/ {"Mustang", "Escape", "F-150"},
                                    {"Corvette", "Equinox", "Silverado"},
                                    {"Challenger", "Durango", "Ram 1500"}
                                    };

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
