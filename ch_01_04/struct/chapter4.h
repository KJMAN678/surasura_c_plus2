#include <string>
using namespace std;

struct HealthCheck
{
    string name;
    double height;
    double weight;
    double bmi;
};

double
getBmi(double height, double weight);

double getBmi(const HealthCheck *phc);