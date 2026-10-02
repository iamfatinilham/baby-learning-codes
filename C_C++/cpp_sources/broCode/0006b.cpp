#include <iostream>

int main()
{
    using std::string;
    using std::cout;
    using std::endl;


    using text_t = string; // Or, using text_t = std::string;
    using number_t = int;
    
    text_t firstname = "Alex";
    number_t age = 23;
    
    cout << endl;
    
    cout << "First name: " << firstname << endl;
    cout << "Age: " << age << endl;
    
    cout << endl;

    return 0;
}
