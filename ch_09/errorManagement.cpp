#include <iostream>

int getFee(int age)
{
    int fee;

    if (age < 0)
    {
        fee = -1;
    }
    else if (age > 150)
    {
        fee = -2;
    }
    else if (age < 20)
    {
        fee = 500;
    }
    else
    {
        fee = 1000;
    }

    return fee;
}

int main()
{
    int age, fee;

    std::cout << "年齢を入力してください: ";
    std::cin >> age;
    fee = getFee(age);
    if (fee == -1)
    {
        std::cout << "マイナスの年齢が指定されました！" << std::endl;
    }
    else if (fee == -2)
    {
        std::cout << "年齢が大きすぎます！" << std::endl;
    }
    else
    {
        std::cout << "料金は、" << fee << "円です。" << std::endl;
    }

    return 0;
}