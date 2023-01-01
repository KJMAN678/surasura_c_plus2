#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

const int HealthChecker::STD_BMI = 22;

double HealthChecker::getBmi()
{
    if (this->bmi == 0)
    {
        double mHeight = this->height / 100;
        this->bmi = this->weight / mHeight / mHeight;
    }

    return this->bmi;
}

string HealthChecker::getName()
{
    return this->name;
}

HealthChecker::HealthChecker(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}

int HealthChecker::getStdBmi()
{
    return HealthChecker::STD_BMI;
}

double HealthChecker::getStdWeight()
{
    double mHeight = this->height / 100;
    return HealthChecker::STD_BMI * mHeight * mHeight;
}
