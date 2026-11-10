#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 0;
    std::cin >> num;
    int result = 0;
    std::string temp;
    
    for (int i = 0; i < num; i++)
    {
        std::getline(std::cin >> std::ws, temp);
        if (temp == "X++" || temp == "++X") {
            result++;
        } else if (temp == "X--" || temp == "--X") {
            result--;
        }
    }

    std::cout << result << std::endl;
    
    return 0;
}
