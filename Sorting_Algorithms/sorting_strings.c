#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compareChar(const void *a, const void *b)
{
    char *x = *(char **)a;
    char *y = *(char **)b;

    return strcmp(x, y);
}
int main()
{
    char *names[] = {
        "Liam Carter",
        "Ava Thompson",
        "Noah Bennett",
        "Emma Richardson",
        "Oliver Hayes",
        "Sophia Mitchell",
        "Elijah Foster",
        "Isabella Brooks",
        "Lucas Griffin",
        "Mia Sanders",
        "Mason Perry",
        "Charlotte Hughes",
        "Ethan Powell",
        "Amelia Simmons",
        "James Coleman",
        "Harper Ward",
        "Benjamin Russell",
        "Evelyn Price",
        "Henry Jenkins",
        "Scarlett Morgan"};

    int size = sizeof(names) / sizeof(names[0]);

    qsort(names, size, sizeof(char *), compareChar);

    for (int i = 0; i < size; i++)
    {
        printf("%s,\n", names[i]);
    };

    return 0;
}