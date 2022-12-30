#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int stdBmi = 22; // 標準BMI
    double height;
    double weight;
    double bmi;
    double stdWeight; // 標準体重

    cout << "身長(cm)を入力してください: ";
    cin >> height;

    cout << "体重(kg)を入力してください ";
    cin >> weight;

    height /= 100;

    bmi = weight / height / height;

    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    if (bmi < 18.5)
    {
        cout << "低体重です。" << endl;
    }
    else if (bmi < 25.0)
    {
        cout << "普通体重です。" << endl;
    }
    else if (bmi < 30.0)
    {
        cout << "肥満(1度)です。" << endl;
    }
    else if (bmi < 35.0)
    {
        cout << "肥満(2度)です。" << endl;
    }
    else if (bmi < 40.0)
    {
        cout << "肥満(3度)です。" << endl;
    }
    else if (bmi >= 40.0)
    {
        cout << "肥満(4度)です。" << endl;
    }

    // 標準体重を計算する
    stdWeight = stdBmi * height * height;

    cout << "あなたの標準体重は、" << stdWeight << "kgです。" << endl;

    return 0;
}