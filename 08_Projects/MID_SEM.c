#include <stdio.h>
int GLOBAL_WARN = 0;

void analyze_pulse(int pulse)
{
    static int anomalies = 0;
    int local_flag = 0;
    if (pulse > 100 || pulse < 60)
    {
        anomalies++;
        local_flag = 1;
        GLOBAL_WARN += 2;
    }
    if (local_flag)
    {
        printf("A: %d\n", anomalies);
    }
}

int main()
{
    int data[4] = {105, 70, 50, 115};
    int i = 0;

    do
    {
        analyze_pulse(data[i]);
        i++;
    } while (i < 4);

    printf("GW: %d \n", GLOBAL_WARN);
    return 0;
}