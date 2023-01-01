#include <iostream>
#include <cmath>
#include "chapter4.h"
using namespace std;

int main()
{

    double a, b, c;
    double x1, x2;
    bool ans;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    ans = quadEq(a, b, c, &x1, &x2);

    if (ans)
    {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
    {
        cout << "解なし。" << endl;
    }

    return 0;
}