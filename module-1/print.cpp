#include <iostream>
int main()
{
    int x = 100;
    char a = 'A';
    double y = 100.55;

    std::cout << x << '\n';
    std::cout << a << '\n';
    std::cout << y << '\n';

    std::cout << x << a << y << std::endl;

    std::cout << "MY number is" << " " << x << std::endl;
}