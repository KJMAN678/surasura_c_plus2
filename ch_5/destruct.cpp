#include <iostream>
#include <string>
using namespace std;

class ConstDest
{
private:
    string name;

public:
    ConstDest(string name);
    ~ConstDest();
};

ConstDest::ConstDest(string name)
{
    cout << name << "のコンストラクタが呼び出されました。" << endl;
    this->name = name;
}

ConstDest::~ConstDest()
{
    cout << this->name << "のデストラクタが呼び出されました。" << endl;
}

ConstDest globalObj("グローバルオブジェクト");

void sub()
{
    cout << "sub関数が呼ばれました。" << endl;

    ConstDest localObj("ローカルオブジェクト");

    cout << "sub関数を終了します。" << endl;

    return;
}

int main()
{
    cout << "main関数が呼び出されました。" << endl;

    sub();

    sub();

    cout << "main関数を終了します。" << endl;

    return 0;
}