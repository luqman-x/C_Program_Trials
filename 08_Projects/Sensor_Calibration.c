#include <stdio.h>

void calibrate_spo2(float reading)
{
    float a = (reading + 1.5);
    printf("Calliberated value is: %.2f", a);
}
int main()
{
    float spo2;

    printf("Enter SPO2 level: ");
    scanf("%f", &spo2);

    float *reading = &spo2;

    calibrate_spo2(*reading);

    return 0;
}