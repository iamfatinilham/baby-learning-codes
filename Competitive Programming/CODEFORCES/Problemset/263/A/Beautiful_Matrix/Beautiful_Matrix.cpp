#include <iostream>
#include <cmath>

int main()
{
    int height = 5, width = 5;
    int x = 0, y = 0;

    int arr[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int count = abs(x - 2) + abs(y - 2);

    std::cout << count << std::endl;

    return 0;
}
