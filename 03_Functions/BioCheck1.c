#include <stdio.h>

float calculatebmi(float value1, float value2);
float converttemp(float value);
int main()

{
    float hight, weight, farentemp, bmi, celcius;
    int num;

    printf("======Do a Quick Biocheck For Yourself=======\n");
    do
    {

        printf("To calculate BME, enter 1: \nTo Convert your tempreture to Farenheit, enter 2: \nTo Shutdown, enter 3: \n\n");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("====BMI Calculator====\n");
            printf("Enter your hight in meters: ");
            scanf("%f", &hight);

            printf("Enter your weight in Kg: ");
            scanf("%f", &weight);

            bmi = calculatebmi(weight, hight);
            printf("Your BMI is %.2f kg/m^2\n\n", bmi);
        }
        else if (num == 2)
        {
            printf("====Converting Farenheit to Celcis====\n");
            printf("Enter your body tempreture  in farenheit: ");
            scanf("%f", &farentemp);

            celcius = converttemp(farentemp);
            printf("Your Tempreture in Farenheit is %.2f\n\n", celcius);
        }
        else
        {
            printf("Shutting Down.....\n");
            break;
        }

    } while (num != 3);
    return 0;
}

float calculatebmi(float value1, float value2)
{
    float a = value1 / (value2 * value2);
    return a;
}

float converttemp(float value)
{
    float b = (value - 32) * 5 / 9;
    return b;
}