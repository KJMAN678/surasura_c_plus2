#include <iostream>
#include <string>

class Animal
{
protected:
    std::string name;

public:
    virtual void speak() = 0;
    Animal(std::string name); // コンストラクタ
};

class Dog : public Animal
{
public:
    void speak();
    Dog(std::string name); // コンストラクタ
};

class Cat : public Animal
{
public:
    void speak();
    Cat(std::string name); // コンストラクタ
};

// コンストラクタ
Animal::Animal(std::string name)
{
    this->name = name;
}

void Dog::speak()
{
    std::cout << this->name << ": ワン！" << std::endl;
}

// 犬を表すクラスのコンストラクタ
Dog::Dog(std::string name) : Animal(name)
{
}

void Cat::speak()
{
    std::cout << this->name << ": ニャン！" << std::endl;
}

// 猫を表すクラスのコンストラクタ
Cat::Cat(std::string name) : Animal(name)
{
}

void sub(Animal *p)
{
    p->speak();
}

int main()
{
    // Dog pochi("ポチ");
    // Cat tama("タマ");

    // sub(&pochi);
    // sub(&tama);

    const int DATA_NUM = 5;
    Animal *p[DATA_NUM];

    p[0] = new Dog("ポチ");
    p[1] = new Cat("タマ");
    p[2] = new Dog("シロ");
    p[3] = new Cat("ミケ");
    p[4] = new Dog("クロ");

    for (int i = 0; i < DATA_NUM; i++)
    {
        p[i]->speak();
        // delete p[i];
    }

    return 0;
}