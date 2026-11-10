#include <iostream>

int main()
{
    int month = 0;
    std::cout << "Enter a month number [1-12]: ";
    std::cin >> month;

    switch (month)
    {
        case 1:
            std::cout << "\nIt's January" << std::endl;
            break;

        case 2:
            std::cout << "\nIt's February" << std::endl;
            break;

        case 3:
            std::cout << "\nIt's March" << std::endl;
            break;

        case 4:
            std::cout << "\nIt's April" << std::endl;
            break;

        case 5:
            std::cout << "\nIt's May" << std::endl;
            break;

        case 6:
            std::cout << "\nIt's June" << std::endl;
            break;

        case 7:
            std::cout << "\nIt's July" << std::endl;
            break;

        case 8:
            std::cout << "\nIt's August" << std::endl;
            break;

        case 9:
            std::cout << "\nIt's September" << std::endl;
            break;

        case 10:
            std::cout << "\nIt's October" << std::endl;
            break;

        case 11:
            std::cout << "\nIt's November" << std::endl;
            break;

        case 12:
            std::cout << "\nIt's December" << std::endl;
            break;
            
        default:
            std::cout << "\nOnly numbers [1-12] are allowed" << std::endl;
            break;
    }

    return 0;
}
