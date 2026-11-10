#include <iostream>

int main()
{

    /*
        MORE Methods...
    */
    std::string name;
    std::string name_bak;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    name_bak = name;

    std::cout << "Before clear method [clear()]" << std::endl;
    std::cout << "Hello " << name << "!!!" << std::endl;

    name.clear();

    std::cout << "AFTER clear method [clear()]" << std::endl;
    std::cout << "Hello " << name << "!!!" << std::endl;

    if (name.empty())
    {
        std::cout << "Name is empty" << std::endl;
    } else {
        std::cout << "Name is NOT empty" << std::endl;
    }

    std::cout << "Got a backup at name_bak variable" << std::endl;
    name = name_bak;

    std::cout << "Appending text \"@gmail.com\"" << std::endl;
    name.append("@gmail.com");
    std::cout << "Your name is now " << name << std::endl;

    std::cout << "Got a backup at name_bak variable" << std::endl;
    name = name_bak;
    
    std::cout << "The first character of your name is: " <<
        name.at(0) <<
        std::endl;

    std::cout << "Inserting text \"@gg@\" on second position" << std::endl;
    name.insert(1, "@gg@");
    std::cout << "Your name is now " << name << std::endl;

    std::cout << "Got a backup at name_bak variable" << std::endl;
    name = name_bak;

    std::cout << "The first white space is in index: " << name.find(' ') << std::endl;

    if (name.length() > 4)
    {
        std::cout << "Erasing first 3 characters of your name..." << std::endl;
        name.erase(0, 3);
        std::cout << "Your name is now " << name << std::endl;
    } else {
        std::cout << "Name length doesn't exceed 4. So, condition not met." << std::endl;
    }
    

    return 0;
}
