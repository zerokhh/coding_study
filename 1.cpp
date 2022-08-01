#include <iostream>

int change_val(int *p)
{
    *p = 3;

    return 0;
}
int main()
{
    int number = 5;

    std::cout << number << std::endl;
    std::cout << change_val(&number) << std::endl;
    std::cout << number << std::endl;
}