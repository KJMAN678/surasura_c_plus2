#include <iostream>
#include <string>
using namespace std;

int main()
{
    int channel;
    string stationName;

    cout << "チャンネル番号を押してください： ";
    cin >> channel;

    switch (channel)
    {
    case 1:
        stationName = "NHK総合";
        break;
    case 2:
        stationName = "NHK Eテレ";
        break;
    case 4:
        stationName = "日本テレビ";
        break;
    case 5:
        stationName = "テレビ朝日";
        break;
    case 6:
        stationName = "TBSテレビ";
        break;
    case 7:
        stationName = "テレビ東京";
        break;
    case 8:
        stationName = "フジテレビ";
        break;
    default:
        stationName = "割り当てなし";
        break;
    }

    cout << stationName << endl;

    return 0;
}