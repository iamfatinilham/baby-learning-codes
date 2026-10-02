// 0004.cpp

#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main()
{
    // using namespace std; /*Saves a lot of time but may occur conflicts among variable name*/
    using std::cout;
    using std::string;

    int x = 0;

    cout << "X = " << x << std::endl;
    cout << "X = " << first::x << std::endl;
    cout << "X = " << second::x << std::endl;
    
    cout << "\n" << std::endl;
    
    string name = "Alex";
    cout << "Hello " << name << std::endl;
    
    cout << "\n" << std::endl;

    using namespace first;
        cout << "Using namespace first" << std::endl;
        cout << "X = " << first::x << std::endl; 

        cout << "\n" << std::endl;

    using namespace second;
        cout << "Using namespace second" << std::endl;
        cout << "X = " << second::x << std::endl;


    return 0;
}
