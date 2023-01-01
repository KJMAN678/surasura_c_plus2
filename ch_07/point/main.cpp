#include <iostream>
#include <string>
#include "point.h"

int main()
{
    Point p1(3, 5);
    Point p2(2, 4);
    Point p3, p4;
    Point p5(3, 5);

    p3 = p1 + p2;
    p4 = p1 - p2;

    std::cout << "p1: x = " << p1.getX() << ", y = " << p1.getY() << std::endl;
    std::cout << "p2: x = " << p2.getX() << ", y = " << p2.getY() << std::endl;
    std::cout << "p3: x = " << p3.getX() << ", y = " << p3.getY() << std::endl;
    std::cout << "p4: x = " << p4.getX() << ", y = " << p4.getY() << std::endl;
    std::cout << "p5: x = " << p5.getX() << ", y = " << p5.getY() << std::endl;

    if (p1 == p5)
    {
        std::cout << "p1とp5は、等しい。" << std::endl;
    }

    if (p1 != p5)
    {
        std::cout << "p1とp5は、等しくない" << std::endl;
    }

    if (p2 == p5)
    {
        std::cout << "p2とp5は、等しい" << std::endl;
    }

    if (p2 != p5)
    {
        std::cout << "p2とp5は、等しくない" << std::endl;
    }

    Point p;

    std::cout << "x座標とy座標を入力してください: " << std::endl;
    std::cin >> p;
    std::cout << "入力された座標は、" << p << "です。" << std::endl;

    return 0;
}