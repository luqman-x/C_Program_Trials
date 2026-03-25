#include <stdio.h>
int main()
{
    float fasting = 9.8;
    float post_meal = 5.1;

    printf("Fasting Value: %.1f\nPost meal value: %.1f \n", fasting, post_meal);

    float temp;
    float *a = &fasting;
    float *b = &post_meal;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Fasting Value: %.1f\nPost meal value: %.1f ", fasting, post_meal);

    return 0;
}