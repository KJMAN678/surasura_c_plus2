#include <iostream>
using namespace std;

int main()
{
    const int DATA_NUM = 10;

    int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};

    int sum;

    double average;

    sum = 0;

    for (int i = 0; i < sizeof(point) / sizeof(int); i++)
    {
        sum += point[i];
    }

    average = (double)sum / DATA_NUM;

    cout << "平均点: " << average << endl;

    return 0;
}