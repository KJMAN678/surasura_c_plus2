#include <iostream>
#include <string>
#include "Account.h"
#include "AccountEx.h"

std::string AccountEx::getName()
{
    return this->name;
}

AccountEx::AccountEx(std::string number, std::string name, int balance) : Account(number, balance), name(name)
{
    //     this->name = name;
}