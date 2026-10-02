#include <iostream>

int main()
{
    using std::string;
    using std::cout;
    using std::endl;


    typedef string text_t; // Or, typedef std::string text_t;
    typedef int number_t;
    
    text_t firstname = "Alex";
    number_t age = 23;
    
    cout << endl;
    
    cout << "First name: " << firstname << endl;
    cout << "Age: " << age << endl;
    
    cout << endl;

    return 0;
}
