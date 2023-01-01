#include <iostream>
#include <string>
#include "Account.h"

std::string Account::getNumber()
{
    return this->number;
}

int Account::getBalance()
{
    return this->balance;
}

void Account::setBalance(int balance)
{
    if (balance >= 0)
    {
        this->balance = balance;
    }
    else
    {
        std::cout << "マイナスの残高は設定できません" << std::endl;
    }
}

Account::Account(std::string number, int balance)
{
    this->number = number;
    this->balance = balance;
}