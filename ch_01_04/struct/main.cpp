#include <iostream>
#include <string>
#include "chapter4.h"

using namespace std;

int main()
{

    const int DATA_NUM = 3;

    HealthCheck people[DATA_NUM] = {
        {"山田一郎", 170, 67.5, 0},
        {"佐藤花子", 160, 54.5, 0},
        {"鈴木次郎", 180, 85.5, 0}};

    int i;

    for (i = 0; i < DATA_NUM; i++)
    {
        people[i].bmi = getBmi(&people[i]);
        cout << people[i].name << "さんのBMIは、" << people[i].bmi << "です。" << endl;
    }

    return 0;
}