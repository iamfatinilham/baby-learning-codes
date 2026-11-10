#include <iostream>

int main(int argc, char const *argv[])
{
    int bear = 0, bigBrother = 0;

    std::cin >> bear >> bigBrother;

    int count = 0;

    while (bear <= bigBrother)
    {
        bear = bear * 3;
        bigBrother = bigBrother * 2;
        count++;
    }
    
    std::cout << count << std::endl;

    return 0;
}
