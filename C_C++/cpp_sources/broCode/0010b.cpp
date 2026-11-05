#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;


    string firstName;
    string fullName;
    int age = 0;

    cout << "  What's your Age?\n  Age: ";
    cin >> age;
    cout << endl;

    cout << "  What's your First name?\n  Name: ";
    cin >> firstName;
    //std::getline(std::cin >> std::ws, firstName);
    cout << endl;

    cout << "  What's your FULL name?\n  Name: ";
    std::getline(std::cin >> std::ws, fullName);
    cout << endl;

    cout << endl;


    cout << "Your first name is " << firstName << endl;
    cout << "Your full name is " << fullName << endl;
    cout << "You are " << age << " years old." << endl;
    cout << endl;

    return 0;
}
