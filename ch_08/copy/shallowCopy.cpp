#include <iostream>

class PtrClass
{
public:
    int *ptr; // ポインタのメンバ関数

    // コンストラクタ
    PtrClass()
    {
        std::cout << "コンストラクタが呼び出されました。" << std::endl;
        this->ptr = new int[3];
    }

    // デストラクタ
    ~PtrClass()
    {
        std::cout << "デストラクタが呼び出されました。" << std::endl;
        delete[] ptr;
    }

    // コピーコンストラクタ
    PtrClass(const PtrClass &obj)
    {
        std::cout << "コピーコンストラクタが呼び出されました。" << std::endl;
        this->ptr = obj.ptr;
    }

    // 独自の代入演算子のオーバーロード
    PtrClass &operator=(const PtrClass &obj)
    {
        std::cout << "代入演算子のオーバーロードが呼び出されました。" << std::endl;
        this->ptr[0] = obj.ptr[0];
        this->ptr[1] = obj.ptr[1];
        this->ptr[1] = obj.ptr[2];
        return *this;
    }
};

int main()
{
    PtrClass obj1;
    obj1.ptr[0] = 123;
    obj1.ptr[1] = 456;
    obj1.ptr[2] = 789;

    PtrClass obj2;
    obj2.ptr[0] = 111;
    obj2.ptr[1] = 222;
    obj2.ptr[2] = 333;

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "obj2のメンバ変数ptrの値: " << obj2.ptr << std::endl;
    std::cout << "obj2.ptr[0]の値: " << obj2.ptr[0] << std::endl;
    std::cout << "obj2.ptr[1]の値: " << obj2.ptr[1] << std::endl;
    std::cout << "obj2.ptr[2]の値: " << obj2.ptr[2] << std::endl;

    // PtrClass obj2 = obj1;
    obj2 = obj1;

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "obj1のメンバ変数ptrの値: " << obj1.ptr << std::endl;
    std::cout << "obj1.ptr[0]の値: " << obj1.ptr[0] << std::endl;
    std::cout << "obj1.ptr[1]の値: " << obj1.ptr[1] << std::endl;
    std::cout << "obj1.ptr[2]の値: " << obj1.ptr[2] << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "obj2のメンバ変数ptrの値: " << obj2.ptr << std::endl;
    std::cout << "obj2.ptr[0]の値: " << obj2.ptr[0] << std::endl;
    std::cout << "obj2.ptr[1]の値: " << obj2.ptr[1] << std::endl;
    std::cout << "obj2.ptr[2]の値: " << obj2.ptr[2] << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    return 0;
}