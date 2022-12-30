#include <iostream>
#include "chapter4.h"
using namespace std;

int main()
{
    int DATA_NUM = 10;
    int a[] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
    double averagePointer, averageArray;

    averagePointer = getAveragePointer(a, DATA_NUM);

    cout << "平均点: " << averagePointer << endl;

    averageArray = getAverageArray(a, DATA_NUM);

    cout << "平均点: " << averageArray << endl;

    return 0;
}