#include <stdio.h>

int find_max_hr(int hr_readings[], int len)
{
    int max = hr_readings[0];
    for (int i = 1; i < len; i++)
    {
        if (hr_readings[i] > max)
            max = hr_readings[i];
    }
    printf("Peak HR:%d bpm", max);
}
int hr_readings[] =
    {
        72, 88, 105, 67, 93, 110, 78};

int len = sizeof(hr_readings) / sizeof(hr_readings[0]);

int main()
{
    find_max_hr(hr_readings, len);
    return 0;
}