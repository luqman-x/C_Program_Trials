#include <stdio.h>

float calculatebmi(float value1, float value2);
float converttemp(float value);
int num;
float BATTERY_LEVEL = 100.0;
int usage_count = 0;

int main()

{
    float hight, weight, farentemp, bmi, celcius;

    printf("======Do a Quick Biocheck For Yourself=======\n");

    do
    {
        if (BATTERY_LEVEL == 0)
        {
            printf("Buttery Low....\nShutting Down\n");
            break;
        }

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
            BATTERY_LEVEL -= 5;
        }
        else if (num == 2)
        {
            printf("====Converting Farenheit to Celcis====\n");
            printf("Enter your body tempreture  in farenheit: ");
            scanf("%f", &farentemp);

            celcius = converttemp(farentemp);
            printf("Your Tempreture in Farenheit is %.2f \n\n", celcius);
            BATTERY_LEVEL -= 5;
        }
        else
        {
            printf("Shutting Down.....\n");
            break;
        }

        printf("Battery Percentage is: %.1f%% \n", BATTERY_LEVEL);

        if ((num == 1) || (num == 2))
        {
            usage_count++;
        }

    } while (num != 3);

    printf("You device was used %d times since booting..\n", usage_count);
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