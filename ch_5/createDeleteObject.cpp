#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    HealthChecker *ptr = new HealthChecker("山田一郎", 170, 67.5);

    cout << ptr->getName() << "さんのBMIは、" << ptr->getBmi() << "です。" << endl;

    delete ptr;

    return 0;
}