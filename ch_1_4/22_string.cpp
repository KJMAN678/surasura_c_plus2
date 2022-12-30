#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3;

    s1 = "apple";
    s2 = "banana";

    if (s1 > s2)
    {
        cout << "大きい。" << endl;
    }
    else if (s1 < s2)
    {
        cout << "小さい。" << endl;
    }
    else
    {
        cout << "等しい。" << endl;
    }

    s3 = s1 + s2;

    cout << s3 << endl;

    cout << s3.length() << endl;

    cout << s3.substr(5, 3) << endl;

    cout << s3[5] << endl;

    cout << s3.find("na") << endl;

    s3.clear();

    if (s3.empty())
    {
        cout << "空です。" << endl;
    }
    else
    {
        cout << "空ではありません。" << endl;
    }

    return 0;
}