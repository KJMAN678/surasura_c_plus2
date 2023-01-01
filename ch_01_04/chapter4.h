#include <iostream>
#include <cmath>
using namespace std;

struct HealthCheck
{
    string name;
    double height;
    double weight;
    double bmi;
};

double
getBmi(double height, double weight)
{

    /*
     * @brief BMIを算定
     * @param (height) double height 身長(cm)
     * @param (weight) double weight 体重(kg)
     * @return (double) BMI
     */

    double bmi;

    height /= 100;

    bmi = weight / height / height;

    return bmi;
}

bool quadEq(double a, double b, double c, double *px1, double *px2)
{
    double inRoot;
    bool ans;

    inRoot = b * b - 4 * a * c;

    if (inRoot < 0)
    {
        ans = false;
    }
    else
    {
        ans = true;
    }

    *px1 = (-b + sqrt(inRoot)) / (2 * a);
    *px2 = (-b - sqrt(inRoot)) / (2 * a);

    return ans;
}

double getAveragePointer(const int *a, int length)
{
    double sum;
    double average;
    int i;

    sum = 0;
    for (i = 0; i < length; i++)
    {
        sum += *a;
        a++;
    }

    average = (double)sum / length;

    return average;
}

double getAverageArray(const int a[], int length)
{
    double sum;
    double average;
    int i;

    sum = 0;
    for (i = 0; i < length; i++)
    {
        sum += a[i];
    }

    average = (double)sum / length;

    return average;
}