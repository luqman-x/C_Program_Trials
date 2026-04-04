#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x > y)
        return 1;
    if (x < y)
        return -1;
    return 0;
}

int main()
{
    int array[] = {5, 1, 9, 3, 7};
    int size = sizeof(array) / sizeof(array[0]);

    qsort(array, size, sizeof(int), compareInt);

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    return 0;
}