#include <iostream>
#include <cmath>


int factorial(int x = 1);
double intermediateVal(double a, double b);
double g(double x);

int main()
{
    std::cout << factorial(5) << std::endl;

    std::cout << intermediateVal(1.0, 2.0) << std::endl;

    return 0;
}

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

double intermediateVal(double a, double b)
{
    double e = 0.0001;

    if (b > a)
    {
        if (g(a) < 0 && g(b) > 0)
        {
            // a += e;
            // b -= e;

            return intermediateVal(a + e, b - e);
        }
        else if (g(b) > 0 && g(a) < g(b))
        {
            // b -= e;

            return intermediateVal(a, b - e);
        }
        else if (g(a) < 0 && g(b) > g(a))
        {
            // a += e;

            return intermediateVal(a + e, b);
        }

    }
    else
    {
        std::cout << "[" << a << ", " << b + e << "]" << std::endl;
    }


    return 1;
}

double g(double x)
{
    return (4 * pow(x, 3)) - (6 * pow(x, 2)) + (3 * x) - 2;
}
