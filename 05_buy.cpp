#include <iostream>
using namespace std;

int main()
{
    int money;
    int price;

    money = 10000;

    while (money > 0)
    {
        cout << "残金: " << money << "円" << endl;

        cout << "買い物した金額: ";
        cin >> price;

        money -= price;
    }

    cout << "買い物終了！" << endl;

    return 0;
}