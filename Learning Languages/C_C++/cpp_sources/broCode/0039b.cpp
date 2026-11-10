#include <iostream>

/*

*/

int main(int argc, char const *argv[])
{
    std::string foods[10];
    std::string temp;

    for (int i = 0; i < sizeof(foods)/sizeof(foods[0]); i++)
    {
        std::cout << "Enter a food you would like" << "( " << i+1 << " / " << sizeof(foods)/sizeof(foods[0]) << " )" << ": ";
        std::getline(std::cin >> std::ws, temp);


        if (temp == "q") {

            break;

        } else {

            foods[i] = temp;

        }

    }

    std::cout << "Your favourite foods following: " << std::endl;
    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << std::endl;
    }


    return 0;
}
