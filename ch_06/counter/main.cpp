#include <iostream>
#include "counter.h"
#include "counterEx.h"

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

    CounterEx cntEx[10];

    cntEx[3].upVal();
    cntEx[5].upVal();
    cntEx[5].upVal();

    std::cout << "継承後 3番のカウンタの値 = " << cntEx[3].getVal() << std::endl;
    std::cout << "継承後 5番のカウンタの値 = " << cntEx[5].getVal() << std::endl;

    cntEx[3].downVal();
    cntEx[5].downVal();

    std::cout << "継承後 3番のカウンタの値 = " << cntEx[3].getVal() << std::endl;
    std::cout << "継承後 5番のカウンタの値 = " << cntEx[5].getVal() << std::endl;
}