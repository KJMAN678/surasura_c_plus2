#include "counter.h"

void Counter::resetVal()
{
    this->val = 0;
}

void Counter::upVal()
{
    this->val++;
}

int Counter::getVal()
{
    return this->val;
}

Counter::Counter()
{
    this->resetVal();
}

int counterVal[10];

void resetCounterVal(int num)
{
    counterVal[num] = 0;
}

void upCounterVal(int num)
{
    counterVal[num]++;
}