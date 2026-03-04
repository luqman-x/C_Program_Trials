#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    float sum = 0;
    int min, max;
    float average;
    int num;

    printf("===Welcome To KNUST ICU Center===\n");

    printf("Enter the number of heart rates available: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid number of readings.\n");
        return 0;
    }

    int bradyCount = 0;
    int normalCount = 0;
    int tachyCount = 0;
    int heart_rate[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter your heart rate for entry %d: \n", i + 1);
        if ((scanf("%d", &heart_rate[i])) != 1)
        {
            printf("Invalid Input. Please enter a positive integer.\n");
            return 1;
        }
        sum += heart_rate[i];

        // Computing max and min

        if (i == 0)
        {
            max = heart_rate[i];
            min = heart_rate[i];
        }

        // Update max and min
        if (heart_rate[i] > max)
        {
            max = heart_rate[i];
        }
        if (heart_rate[i] < min)
        {
            min = heart_rate[i];
        }

        if (heart_rate[i] < 60)
        {
            bradyCount++;
        }
        else if (heart_rate[i] <= 100)
        {
            normalCount++;
        }
        else
        {
            tachyCount++;
        }
    }

    average = sum / num;

    printf("\n====ICU HEART RATE REPORT ====\n");
    printf("Average Heart Rate: %.2f bpm\n", average);
    printf("Maximum Heart Rate: %d bpm\n", max);
    printf("Minimum Heart Rate: %d bpm\n", min);

    printf("\nBradycardia Count (<60): %d\n", bradyCount);
    printf("Normal Count (60-100): %d\n", normalCount);
    printf("Tachycardia Count (>100): %d\n", tachyCount);

    if (tachyCount > 10)
    {
        printf("\nWARNING: Sustained Tachycardia Detected\n");
    }

    return 0;
}