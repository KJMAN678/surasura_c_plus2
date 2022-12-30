#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    const int DATA_NUM = 3;

    HealthChecker people[DATA_NUM] = {
        HealthChecker("山田一郎", 170, 67.5),
        HealthChecker("佐藤花子", 160, 54.5),
        HealthChecker("鈴木次郎", 180, 85.5)};

    for (int i = 0; i < DATA_NUM; i++)
    {
        cout << people[i].getName() << "さんのBMIは、" << people[i].getBmi() << "です。" << endl;
        cout << "標準体重は、" << people[i].getStdWeight() << "です。" << endl;
    }

    return 0;
}