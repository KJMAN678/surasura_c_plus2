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