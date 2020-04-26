#include <iostream>

void cout(int);
void cout(double);

int main()
{
    ::cout(3);
    ::cout(2.56);
    return 0;
}


void cout(int x)
{
    std::cout << x << std::endl;
}

void cout(double x)
{
    std::cout << x << std::endl;
}
