#include <iostream>

int main()
{
    /*
        for loop
    */

    /*
        the difference between for and while (Both while and do-while) loop
        is that it gives you kind of more control on how many times the loop will execute
        instead of condition based checking that comes from while type loops

        each type of loop
        • while
        • do-while
        • for
        has it's own use-cases
    */

    int num = 0;


    std::cout << "Print how many times to print: ";
    std::cin >> num;
    

    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    
    for (int i = 0; i < (num*2); i+=2)
    {
        std::cout << "Happy New Year" <<std::endl;
    }
    
    return 0;
}
