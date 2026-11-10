#include <iostream>

/*
    Overloaded Functions
*/

void bakePizza(void)
{
    std::cout << "Here is your pizza" << std::endl;
}

void bakePizza(std::string topping1)
{
    std::cout << "Here is your pizza with " << topping1 << " included" << std::endl;
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << " included" << std::endl;
}

int main()
{
    bakePizza();

    bakePizza("pepperoni");

    bakePizza("pepperoni", "mushrooms");

    return 0;
}
