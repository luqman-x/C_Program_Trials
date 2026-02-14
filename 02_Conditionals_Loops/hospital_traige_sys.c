#include <stdio.h>
#include <math.h>

int main(void)
{
    int heart_rate;
    float SpO2;
    int cont;

    printf("=====Welcome to BIOMED clinic Triage System=====\n");
    do
    {
        // Taking Patient input
        printf("Enter Patient heart rate(bpm): \n");
        scanf("%d", &heart_rate);

        printf("Enetr Patient Oxegen Saturation Level: \n");
        scanf("%.2f", &SpO2);

        printf("====== PATIENT INFO ===== \n");
        printf("The patient SpO2 is %.2f  and the patient Heart rate per minute is %d ppm \n", SpO2, heart_rate);

        // Logical Part
        if ((SpO2 < 90 || heart_rate > 120) && ((heart_rate <= 600 && SpO2 <= 100)))
        {
            printf("The given data shows that, the PATIENT IS IN CRITICAL CONDITION. \n\n");
        }
        // To use this line, first import the math liabry
        else if ((90 < SpO2 < 94 || 100 < heart_rate < 120) && ((heart_rate <= 600 && SpO2 <= 100)))

        // else if ((SpO2 > 90 && SpO2 < 94) || (heart_rate > 100 && heart_rate < 120))
        {
            printf("The given data shows, the patient condition is worse and need an URGENT checkup ASAP \n\n");
        }
        else if ((heart_rate > 600 || SpO2 > 100))
        {
            printf("Incorrect Input. \nPlease enter a correct value. \n");
        }
        else
        {
            printf(" Don't worry, Patient is Fine. \n\n");
        }

        printf("Enter 1 if you want to continue or 0 for No \n");
        scanf("%d", &cont);
    } while (cont == 1);

    printf("Thank you for ypur time. \nThe code Ends Here!");
    return 0;
}