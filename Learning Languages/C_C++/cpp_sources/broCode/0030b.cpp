#include <iostream>
#include <ctime>

/*
    Simple Rock-Paper-Scissor
*/


char getUserChoice()
{
    char player;
    do
    {
        std::cout << "\n ********************************" << std::endl;
        std::cout << " ***** Rock-Paper-Scissors ******" << std::endl;
        std::cout << " ********************************" << std::endl;
        std::cout << "  'r' for rock" << std::endl;
        std::cout << "  'p' for paper" << std::endl;
        std::cout << "  's' for scissors" << std::endl;
        std::cout << "  choose any [r, p, s]: ";
        std::cin >> player;
        std::cout << std::endl;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(NULL));
    int num = (rand() % 3) + 1; // Generates random number between [1 - 3]

    switch (num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

        default:
            return 'r';

    }
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << std::endl;
        break;

    case 'p':
        std::cout << "Paper" << std::endl;
        break;

    case 's':
        std::cout << "Scissor" << std::endl;
        break;

    default:
        break;
    }
}

void showWinStatus(int input)
{
    switch (input)
    {
        case 1:
            std::cout << "It's a tie!\n" << std::endl;
            break;

        case 2:
            std::cout << "You lose!\n" << std::endl;
            break;

        case 3:
            std::cout << "You won!\n" << std::endl;
            break;

        default:
            break;
    }
}

void chooseWinner(char player, char machine)
{
    switch (player)
    {
        case 'r':
            switch (machine)
            {
                case 'r':
                    showWinStatus(1);
                    break;

                case 'p':
                    showWinStatus(2);
                    break;

                default:
                    showWinStatus(3);
                    break;
            }
            break;

        case 'p':
            switch (machine)
            {
                case 'p':
                    showWinStatus(1);
                    break;

                case 's':
                    showWinStatus(2);
                    break;

                default:
                    showWinStatus(3);
                    break;
            }
            break;

        case 's':
            switch (machine)
            {
                case 's':
                    showWinStatus(1);
                    break;

                case 'r':
                    showWinStatus(2);
                    break;

                default:
                    showWinStatus(3);
                    break;
            }
            break;

        default:
            break;
    }
}




int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);
    std::cout << std::endl;
    
    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);
    std::cout << std::endl;

    chooseWinner(player, computer);

    return 0;
}
