#include <iostream>
#include "MyCircle.h"

int main()
{
    MyCircle obj(10);

    std::cout << "半径10の円の面積: " << obj.getArea() << std::endl;

    return 0;
}