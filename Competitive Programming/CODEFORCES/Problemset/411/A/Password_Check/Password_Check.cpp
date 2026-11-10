#include <iostream>

int passCheck(std::string pass, int passLength)
{
    int isNumber = 0, isSmall = 0, isCapital = 0;
    //std::cout << pass << std::endl;

    for (int i = 0; i < passLength; i++)
    {
        if ('0' <= pass[i] && pass[i] <= '9') {
            isNumber = 1;
            //std::cout << "number check" << std::endl;
        } else if ('a' <= pass[i] && pass[i] <= 'z') {
            isSmall = 1;
            //std::cout << "small check" << std::endl;
        } else if ('A' <= pass[i] && pass[i] <= 'Z') {
            isCapital = 1;
            //std::cout << "capital check" << std::endl;
        }
    }

    int score = isNumber + isSmall + isCapital;
    //std::cout << score << std::endl;

    if (score == 3) return 1;

    return 0;
}

int main(int argc, char const *argv[])
{
    std::string simplePass;
    std::getline(std::cin >> std::ws, simplePass);

    if (simplePass.length() >= 5 && passCheck(simplePass, simplePass.length()))
    {
        std::cout << "Correct" << std::endl;
    } else {
        std::cout << "Too weak" << std::endl;
    }
    
    return 0;
}
