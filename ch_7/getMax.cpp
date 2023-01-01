#include <iostream>

int getMax(int a, int b)
{
    return a > b ? a : b;
}

double getMax(double a, double b)
{
    return a > b ? a : b;
}

int getMax(int a[], int length)
{
    int ans = a[0];
    for (int i = 1; i < length; i++)
    {
        if (ans < a[i])
        {
            ans = a[i];
        }
    }

    return ans;
}

int main()
{
    std::cout << getMax(123, 567) << std::endl;

    std::cout << getMax(1.23, 5.67) << std::endl;

    const int DATA_NUM = 5;

    int a[DATA_NUM] = {22, 44, 33, 55, 11};

    std::cout << getMax(a, DATA_NUM) << std::endl;

    return 0;
}