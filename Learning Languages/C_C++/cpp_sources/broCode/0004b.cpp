// 0004.cpp

#include <iostream>

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second


int main()
{
    // using namespace std; /*Saves a lot of time but may occur conflicts among variable name*/
    using std::cout;
    using std::string;

    string name = "Alex";
    cout << "Hello " << name << std::endl;

    using namespace first;
    cout << "X (First) = " << x << std::endl;


    int x = 0;
    cout << "X = " << x << std::endl;
    cout << "X (First) = " << first::x << std::endl;
    cout << "X (Second) = " << second::x << std::endl;
    
    cout << "\n" << std::endl;
    cout << "\n" << std::endl;

    /*
        Here, applying

        ```c
        using namespace first;
        std::cout << "X (First) = " << x << std::endl;
        ```

        Won't work. As, x is already defined above.
        So, we need to explicitly define `x`
        with help of scope resolution operator, `first::x`

    */

    cout << "Using namespace first" << std::endl;
    cout << "X (First) = " << first::x << std::endl; 

    cout << "\n" << std::endl;

    cout << "Using namespace second" << std::endl;
    cout << "X (Second) = " << second::x << std::endl;


    return 0;
}
