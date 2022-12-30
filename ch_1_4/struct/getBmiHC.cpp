#include <iostream>
#include <string>
#include "chapter4.h"

using namespace std;

double getBmi(const HealthCheck *phc)
{
    return getBmi(phc->height, phc->weight);
}