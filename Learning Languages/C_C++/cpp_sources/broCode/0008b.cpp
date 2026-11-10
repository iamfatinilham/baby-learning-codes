#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;


    string name = "";
    int age = 0;
    
    cout << endl;

    cout << "  What's your first name (NO SPACE)?\n  Name: ";
    cin >> name;
    cout << endl;
    
    cout << "  What's your Age?\n  Age: ";
    cin >> age;
    cout << endl;

    cout << "Your first name is " << name << endl;
    cout << "You are " << age << " years old." << endl;
    cout << endl;

    return 0;
}
