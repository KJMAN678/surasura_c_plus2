#include <iostream>
#include <string>

class Person
{
private:
    std::string name;

public:
    void speak();
    void speak(std::string decoration);
    Person(std::string name); // コンストラクタ
};

void Person::speak()
{
    std::cout << this->name << std::endl;
}

// 飾り付きで氏名を表示する
void Person::speak(std::string decoration)
{
    std::cout << decoration << std::endl;
    std::cout << this->name << std::endl;
    std::cout << decoration << std::endl;
}

// コンストラクタの実装
Person::Person(std::string name)
{
    this->name = name;
}

int main()
{
    Person p("山田一郎");

    p.speak();

    p.speak("★★★★★★★★★★");

    return 0;
}