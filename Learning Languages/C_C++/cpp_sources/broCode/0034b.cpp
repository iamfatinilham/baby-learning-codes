#include <iostream>

/*
    for each loop (Loop that eases the traversal over and iterable data set)
*/

int main()
{
    std::string students[] = {"Jessica", "Lucia", "Sabrina", "Alex", "Mark", "Sam", "John", "Sandy"};
    float grades[] = {65, 72, 81, 93};

    for (std::string student : students)
    {
        std::cout << student << std::endl;
    }

    for(float grade : grades)
    {
        std::cout << grade << std::endl;
    }


    return 0;
}
