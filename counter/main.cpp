#include <iostream>
#include "counter.h"

int main()
{
    Counter cnt[10];

    cnt[3].upVal();
    cnt[3].upVal();

    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();

    std::cout << "3番のカウンタの値 = " << cnt[3].getVal() << std::endl;
    std::cout << "5番のカウンタの値 = " << cnt[5].getVal() << std::endl;
}