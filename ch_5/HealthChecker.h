class HealthChecker
{
private:
    static const int STD_BMI;
    string name;
    double height;
    double weight;
    double bmi;

public:
    static int getStdBmi();
    double getStdWeight();
    double getBmi();
    string getName();
    HealthChecker(string name, double height, double weight);
};