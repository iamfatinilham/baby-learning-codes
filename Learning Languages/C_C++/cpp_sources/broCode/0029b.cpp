#include <iostream>
#include <iomanip>
#include <limits>

/*
    Simple banking demo
*/

void header1()
{
    std::cout << "\n ************************" << std::endl;
    std::cout << " ***** Bank of C++ ******" << std::endl;
}

void header2()
{
    std::cout << " ************************" << std::endl;
    std::cout << " ** Enter your choice: **" << std::endl;
    std::cout << " ************************" << std::endl;
    std::cout << " *  1. Show Balance     *" << std::endl;
    std::cout << " *  2. Deposit Money    *" << std::endl;
    std::cout << " *  3. Withdraw Money   *" << std::endl;
    std::cout << " *  4. Exit             *" << std::endl;
    std::cout << " ************************" << std::endl;
    std::cout << "\nYour answer: ";
}

void showBalance(double num)
{
    std::cout << "Your current Balance is: $" << std::setprecision(2) << std::fixed << num << "\n" << std::endl;
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    std::cout << std::endl;

    if (amount > 0) {

        return amount;

    } else {

        std::cout << "\nInvalid input. Must be greater than zero" << std::endl;
        return 0;

    }
}

double withdraw(double num)
{
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    std::cout << std::endl;

    if (amount > 0 && amount <= num) {

        return amount;

    } else if(amount > num) {

        std::cout << "\nInsufficient Funds!" << std::endl;
        return 0;

    } else {

        std::cout << "\nInvalid input. Must be greater than zero" << std::endl;
        return 0;

    }
}


int main()
{
    double balance = 1000;
    int choice = 0;



    do
    {

        {
            header1();
            header2();
        }


        std::cin >> choice;

        // Undefined behaviour handeling
        std::cin.clear(); // In a fail state, std::cin will block all future input operations. Calling .clear() unblocks the stream by resetting the error flags (failbit, badbit) back to good status

        /*
            To empty the input buffer so the next read operation doesn't instantly consume the leftover junk data
            * Alternatively, can use (This is much better): std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        */
        fflush(stdin); 



        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4:
                std::cout << "\nThanks for visitng!!!\n" << std::endl;
                break;

            default:
                std::cout << "\nInvalid Option: " << choice <<"\nTry Again" << std::endl;
                break;
        }

    } while (choice != 4);

    return 0;
}
