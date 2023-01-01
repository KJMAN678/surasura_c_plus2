#include <iostream>
#include <string>

class Dog
{
private:
    std::string name;

public:
    void speak();
    Dog(std::string name); // コンストラクタ
};

class Cat
{
private:
    std::string name;

public:
    void speak();
    Cat(std::string name); // コンストラクタ
};

void Dog::speak()
{
    std::cout << this->name << ": ワン！" << std::endl;
}

// コンストラクタ
Dog::Dog(std::string name)
{
    this->name = name;
}

void Cat::speak()
{
    std::cout << this->name << ": ニャン！" << std::endl;
}

// コンストラクタ
Cat::Cat(std::string name)
{
    this->name = name;
}

int main()
{
    Dog pochi("ポチ");
    Cat tama("タマ");

    pochi.speak();
    tama.speak();

    return 0;
}