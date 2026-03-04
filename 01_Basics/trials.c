#include <stdio.h>

int main()
{

    float currentvolume;
    float TotalVolume = 0;

    printf("Enter -1 to finish badge: \n");
    while (currentvolume != -1)
    {
        printf("Enter volume to add: ");
        scanf("%f", &currentvolume);

        if (currentvolume <= -1)
        {
            printf("Error: Please enter positive numbers only \n");
        }
        else
        {
            TotalVolume = TotalVolume + currentvolume;
        }
    }

    printf("Total Volume: %.2f\n", TotalVolume);

    return 0;
}