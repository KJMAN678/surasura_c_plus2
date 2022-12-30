#include <iostream>
using namespace std;

int main()
{
    const int DATA_NUM = 10;

    int point[] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};

    int i;
    char grade;

    for (i = 0; i < DATA_NUM; i++)
    {
        if (point[i] < 60)
        {
            cout << "不合格" << endl;
            continue;
        }

        if (point[i] > 80)
        {
            grade = 'A';
        }
        else if (point[i] >= 70)
        {
            grade = 'B';
        }
        else
        {
            grade = 'C';
        }

        cout << point[i] << " = " << grade << endl;
    }

    return 0;
}