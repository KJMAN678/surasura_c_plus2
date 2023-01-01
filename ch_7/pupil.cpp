#include <iostream>
#include <string>

class Pupil
{
private:
    std::string name;
    int point;

public:
    void speak();
    Pupil(std::string name = "未設定", int point = 0); // 引数があるコンストラクタ
    // Pupil();                            // デフォルトコンストラクタ
};

// デフォルトコンストラクタの実装
// Pupil::Pupil()
// {
//     this->name = "未定";
//     this->point = 0;
// }

// 引数のあるコンストラクタの実装
Pupil::Pupil(std::string name, int point)
{
    this->name = name;
    this->point = point;
}

void Pupil::speak()
{
    std::cout << "氏名: " << this->name << std::endl;
    std::cout << "得点: " << this->point << std::endl;
}

int main()
{
    Pupil p1;
    Pupil p2("山田一郎", 95);
    Pupil p3("佐藤花子");

    p1.speak();
    p2.speak();
    p3.speak();

    return 0;
}