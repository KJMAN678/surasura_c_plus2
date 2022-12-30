#include <iostream>
using namespace std;

int main()
{
    int month;

    for (month = 1; month <= 12; month++)
    {
        cout << month << "月\t";
    }
    cout << endl;

    month = 1;

    while (month <= 12)
    {
        cout << month << "月\t";
        month++;
    }
    cout << endl;

    return 0;
}