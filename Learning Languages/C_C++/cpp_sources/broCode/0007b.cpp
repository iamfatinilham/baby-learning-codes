#include <iostream>

namespace calc_1
{
    int students = 6 - 5 + 4 * 3 / 2;
} // namespace calc_1

namespace calc_2
{
    int students = 6 - (5 + 4) * 3 / 2;
} // namespace calc_2


int main()
{
    /*
        All C arithmatics works in C++
    */

    /*
        Arithmatic Operation Priority:
        ==============================
        Parenthesis > Division > Multiplications > Addition > Substraction
    */

    // Expected result: 7
    std::cout << "Student 1 calc: " << calc_1::students << std::endl;

    // Expected result: -7
    std::cout << "Student 2 calc: " << calc_2::students << std::endl;
    return 0;
}
