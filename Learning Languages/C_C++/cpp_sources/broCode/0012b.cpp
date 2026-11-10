/*
    bits/stdc++.h file includes cmath and iostream
    and quite a lot other header files by itself.
*/
#include <bits/stdc++.h>

int main()
{
    double a = 0, b = 0;

    std::cout << "Enter side a of right-angled triangle: ";
    std::cin >> a;
    std::cout << "Enter side b of right-angled triangle: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << std::endl;
    std::cout << "Side C: " << c << std::endl;
    return 0;
}
