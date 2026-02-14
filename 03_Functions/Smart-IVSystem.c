#include <stdio.h>

int main()
{
    float TotalVolume = 0.0;
    float currentvolume;

    printf("====IV Fluid Dosage Calculator====\n");
    printf("Eneter -1 to finish the batch\n\n");

    printf("Enter Fluid Volume (ml)\n");
    scanf("%f", &currentvolume);

    while (currentvolume != -1)
    {

        if ((currentvolume < 0) && (currentvolume != -1))
        {
            printf("Invalid Volume.\nPlease enter a positive value\n");
        }
        else
        {
            TotalVolume = TotalVolume + currentvolume;
        }

        printf("Enter Fluid Volume (ml)\n");
        scanf("%f", &currentvolume);
    }
    printf("Total Volume Required for the Ward is %.2f ml: \n", TotalVolume);

    return 0;
}