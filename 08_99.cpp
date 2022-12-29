#include <iostream>
using namespace std;

int main()
{
    int step;
    int num;

    for (step = 1; step <= 9; step++)
    {
        cout << step << "の段:\t";

        for (num = 1; num <= 9; num++)
        {
            cout << (step * num) << "\t";
        }
        cout << endl;
    }

    return 0;
}