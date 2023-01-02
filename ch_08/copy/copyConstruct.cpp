#include <iostream>

class MyClass
{
private:
    int data;

public:
    int getData()
    {
        return this->data;
    }

    // コンストラクタ
    MyClass(int data)
    {
        std::cout << "コンストラクタが呼び出されました。" << std::endl;
        this->data = data;
    }

    // デストラクタ
    ~MyClass()
    {
        std::cout << "デストラクタが呼び出されました。" << std::endl;
    }

    // コピーコンストラクタ
    MyClass(const MyClass &obj)
    {
        std::cout << "コピーコンストラクタが呼び出されました。" << std::endl;
        this->data = obj.data;
    }
};

int main()
{
    MyClass obj1(123);

    // MyClass obj2 = obj1;

    MyClass obj2(456);
    obj2 = obj1;

    std::cout << "obj1のメンバ変数 data の値: " << obj1.getData() << std::endl;

    std::cout << "obj2のメンバ変数 data の値: " << obj2.getData() << std::endl;

    return 0;
}