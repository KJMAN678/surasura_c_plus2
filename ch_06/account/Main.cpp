#include <iostream>
#include <string>
#include "Account.h"
#include "AccountEx.h"

int main()
{
    Account act("12345678", 10000);

    std::cout << "口座番号: " << act.getNumber();
    std::cout << ", 残高: " << act.getBalance() << std::endl;

    act.setBalance(30000);

    std::cout << "口座番号: " << act.getNumber();

    std::cout << ", 残高 " << act.getBalance() << std::endl;

    act.setBalance(-20000);

    std::cout << "口座番号: " << act.getNumber();
    std::cout << ", 残高 " << act.getBalance() << std::endl;

    AccountEx actEx("12345678", "山田一郎", 10000);

    std::cout << "継承後 口座番号: " << actEx.getNumber();
    std::cout << ", 口座名義人: " << actEx.getName();
    std::cout << ", 残高: " << actEx.getBalance() << std::endl;

    return 0;
}