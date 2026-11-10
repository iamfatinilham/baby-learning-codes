#include <iostream>

int main()
{
    std::string word;

    std::getline(std::cin >> std::ws, word);

    word[0] = std::toupper(word[0]);

    std::cout << word << std::endl;
    return 0;
}
