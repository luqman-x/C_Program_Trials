#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// functions
// To comvert tempreture from Degree to Farenheit
float convert_tem(float temp)
{
    float val = (9 / 5 * temp + 32);
    return val;
}

// Critical → SpO₂ < 90 OR Heart Rate > 120
// Warning → SpO₂ between 90–94 OR Heart Rate between 100–120
// Stable → Otherwise
char *classify_spo2(float spo2, int heart_rate)
{
    if ((spo2 < 90 || heart_rate > 120))
    {
        return "Critical";
    }
    else if (90 < spo2 < 94 || 100 < heart_rate < 120)
    {
        return "Warning";
    }
    else
    {
        return "Normal";
    }
}
// Variables
int heart_rate, start_continue;
float temp, spo2;
int count_patients_critical = 0;
int tem_convert[];

// Main Function
int main()
{
    printf("Welcome to the Dashboard../n Eneter 1 to continue or 2 to quit..");
    scanf("%d", &start_continue);

    if (start_continue == 2)
    {
        return 1;
    }

    do
    {

        printf("Enter patient Heart rate value: ");
        scanf("%d", &heart_rate);

        printf("Enter patient Tempreture in Degree celciuos value: ");
        scanf("%f", &temp);

        printf("Enter patient SPO2 value: ");
        scanf("%f", &spo2);

        float results = convert_tem(temp);
        for (int i = 0; i < 1; i++)
        {
            tem_convert[i] = results;
        }

        char *analysis_results = classify_spo2(spo2, heart_rate);

        if (analysis_results == "Critical")
        {
            count_patients_critical++;
        }

        printf("Welcome to the Dashboard../n Eneter 1 to continue or 2 to quit..");
        scanf("%d", &start_continue);

    } while (start_continue != 2);

    printf("The total critical counts are: %d", count_patients_critical);

    return 0;
}