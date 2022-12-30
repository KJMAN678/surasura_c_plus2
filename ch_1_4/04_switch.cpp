#include <iostream>
#include <string>
using namespace std;

int main()
{

    int channel;
    string fee;

    cin >> channel;

    switch (channel)
    {
    case 1:
    case 2:
        fee = "有料";
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        fee = "無料";
        break;
    default:
        fee = "割り当てなし";
        break;
    }

    cout << fee << endl;

    return 0;
}