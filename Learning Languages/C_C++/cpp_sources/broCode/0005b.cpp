#include <iostream>
#include <vector>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    // Usual usecase of typedef
    typedef std::vector<std::pair<std::string, int>> pairlist_t;

    // Easier examples
    typedef string text_t; // Or, typedef std::string text_t;
    typedef int number_t;
    
    text_t firstname = "Alex";
    number_t age = 23;

    pairlist_t pairLST;
    
    cout << endl;
    
    cout << "First name: " << firstname << endl;
    cout << "Age: " << age << endl;
    
    cout << endl;

    return 0;
}
