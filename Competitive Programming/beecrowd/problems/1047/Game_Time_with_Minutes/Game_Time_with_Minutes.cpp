#include <iostream>

int main(int argc, char const *argv[])
{
    int stHour = 0, enHour = 0, stMin = 0, enMin = 0;

    std::cin >> stHour >> stMin >> enHour >> enMin;

    int diff = ((enHour * 60) + enMin) - ((stHour * 60) + stMin);

    if (diff < 1)
    {
        diff += (24*60);
    } 
    std::cout << "O JOGO DUROU " << diff / 60 << " HORA(S) E " << diff % 60 <<" MINUTO(S)" << std::endl;
    
    return 0;
}
