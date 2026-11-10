#include <iostream>

int main(int argc, char const *argv[])
{
    int columns = 0, limit = 0;

    std::cin >> columns >> limit;

    for (int i = 1; i <= limit; i++)
    {
        std::cout << i;
        if (i % columns == 0)
        {
            std::cout << std::endl;
        } else {
            std::cout << " ";
        }
        
    }
    
    return 0;
}
