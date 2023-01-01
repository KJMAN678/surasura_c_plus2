#include <iostream>

int getMin(int a, int b)
{
    return a < b ? a : b;
}

double getMin(double a, double b)
{
    return a < b ? a : b;
}

int main()
{
    int a, b, c;
    a = 123;
    b = 456;
    c = getMin(a, b);
    std::cout << c << std::endl;

    double x, y, z;
    x = 1.23;
    y = 4.56;
    z = getMin(x, y);
    std::cout << z << std::endl;

    return 0;
}