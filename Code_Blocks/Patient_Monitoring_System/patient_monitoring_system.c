#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    //Variables
    static int critical_count = 0;


    //functions
    //Function for temperature conversation:
    float convert_to_fahrenheit(float tep_celcius)
    {
        float results = 9.0/5.0*(tep_celcius) + 32;
        return results;
    }

    //Function for Status checking
    char *assess_condiion(int heart_rate, float spo2)
    {

        if(spo2 < 90 || heart_rate > 120){
            critical_count = critical_count +1;
            return "Critical";
        }

        else if((spo2 >= 90 && spo2 <= 94) || (heart_rate >= 100 && heart_rate <= 120)){
            return "Warning";
        }

        else{
            return "Stable";
        }

    }

int main_1()
{
    // Variables
    int heart_rate, cont;
    float spo2, tep_celcius, temp_fahrenheit;
    char *status;

    printf("Welcome to the Hospital Dashboard\n");
    printf("Enter 1 to continue or 2 to quit\n");
    scanf("%d", &cont);

    do{
        printf("Enter Heart Rate: ");
        scanf("%d", &heart_rate);

        printf("Enter SpO2 level: ");
        scanf("%f", &spo2);

        printf("Enter Temperature in Celsius: ");
        scanf("%f", &tep_celcius);

        temp_fahrenheit = convert_to_fahrenheit(tep_celcius);

        status = assess_condiion(heart_rate, spo2);

        printf("==== PATIENT REPORT====\n");
        printf("Heart Rate:%d\n", heart_rate);
        printf("SpO2:%.2f", spo2);
        printf("Temperature (C):%f\n",tep_celcius );
        printf("Temperature (F):%f\n",temp_fahrenheit );
        printf("Status:%s\n", status);



        printf("Enter 1 to continue or 2 to quit\n");
        scanf("%d", &cont);


    }while(cont != 2);

    printf("Total Critical Patients: %d\n", critical_count);


    return 0;
}
