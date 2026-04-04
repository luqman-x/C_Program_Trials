#include <stdio.h>
#include <stdlib.h>

int n_array[] = {10, 22, 35, 45, 50, 63, 75, 88, 91, 100};
int len;
void findVal(int n_array[], int len)

    for (int i = 0; i < len; i++)
{
    if (n_array[i] == 75)
    {
        printf("Found at index %d\n", i);
    }
}
int main()
{
    len = sizeof(n_array) / sizeof(n_array[0]);
    findVal(n_array, len);

    return 0;
}
