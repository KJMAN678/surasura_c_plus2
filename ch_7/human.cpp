#include <iostream>
#include <string>

class Human
{
protected:
    std::string name; // 氏名を格納するメンバ変数
public:
    virtual void speak();       // 氏名を表示するメンバ変数
    void speakWithDecoration(); // 飾り付きで氏名を表示するメンバ関数
    Human(std::string name);    // コンストラクタ
};

// 氏名を表示するメンバ関数の実装
void Human::speak()
{
    std::cout << "氏名: " << this->name << std::endl;
}

// 飾り付きで表示するメンバ関数の実装
void Human::speakWithDecoration()
{
    std::cout << "★★★★★★★★★★" << std::endl;
    this->speak();
    std::cout << "★★★★★★★★★★" << std::endl;
}

// コンストラクタの実装
Human::Human(std::string name)
{
    this->name = name;
}

// 学生を表すStudentクラスの定義
class Student : public Human
{
protected:
    std::string number; // 学籍番号を格納するメンバ変数

public:
    void speak();                                  // 氏名と学生番号を表示するメンバ関数
    Student(std::string name, std::string number); // コンストラクタ
};

// 氏名と学生番号を表示するメンバ関数の実装
void Student::speak()
{
    // std::cout << "氏名: " << this->name << std::endl;
    Human::speak();
    std::cout << "学籍番号: " << this->number << std::endl;
}

// コンストラクタの実装
Student::Student(std::string name, std::string number) : Human(name)
{
    this->number = number;
}

int main()
{
    Student yamada("山田一郎", "ABC123456");
    yamada.speak();
    yamada.speakWithDecoration();
    return 0;
}