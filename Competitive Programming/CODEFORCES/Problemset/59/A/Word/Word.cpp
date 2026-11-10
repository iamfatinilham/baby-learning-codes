#include <iostream>

int main()
{
    std::string word;

    std::getline(std::cin >> std::ws, word);

    int countSml = 0, countCap = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            countSml++;

        if (word[i] >= 'A' && word[i] <= 'Z')
            countCap++;
    }

    if (countCap > countSml)
    {
        for (char &a : word)
        {
            a = std::toupper(a);
        }
    } else
    {
        for (char &a : word)
        {
            a = std::tolower(a);
        }
    }
    

    std::cout << word << std::endl;

    return 0;
}
