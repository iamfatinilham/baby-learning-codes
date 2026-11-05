#include <iostream>
#include <vector>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    /*
        Nowadays, to use `using` instead of `typedef`
        is generally better as `using` is more suitable with Templates
    */

    using pairlist_t = std::vector<std::pair<std::string, int>>;

    using text_t = string; // Or, using text_t = std::string;
    using number_t = int;
    
    text_t firstname = "Alex";
    number_t age = 23;
    
    pairlist_t pairLST;

    cout << endl;
    
    cout << "First name: " << firstname << endl;
    cout << "Age: " << age << endl;
    
    cout << endl;

    return 0;
}
