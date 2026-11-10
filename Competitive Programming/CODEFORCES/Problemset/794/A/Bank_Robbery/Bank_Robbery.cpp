#include <iostream>

int dontGetCaught(int safeNum, int myPosition, int bouncer1, int bouncer2)
{
    if (bouncer1 < safeNum && safeNum < bouncer2 && bouncer1 < myPosition && myPosition < bouncer2)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int oleg = 0, guard1 = 0, guard2 = 0;
    int num = 0;
    std::cin >> oleg >> guard1 >> guard2;
    std::cin >> num;

    int noteCount = 0;
    int safe = 0;

    for (int i = 0; i < num; i++)
    {
        std::cin >> safe;

        noteCount = noteCount + dontGetCaught(safe, oleg, guard1, guard2);
    }

    std::cout << noteCount << std::endl;

    return 0;
}
