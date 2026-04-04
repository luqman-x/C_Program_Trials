#include <stdio.h>
#include <string.h>

typedef struct
{
    char *element;
    int found;
    int index;
} Results;

Results BinarySearchStrings(int size, char *target, char *names[])
{
    Results res = {0, -1, -1};

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int num = strcmp(names[mid], target);

        if (num == 0)
        {
            res.found = 1;
            res.index = mid;
            res.element = names[mid];
            return res;
        }
        else if (num > 0)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return res;
}
int main()
{
    char *names[] = {
        "Alice Brown",
        "David Smith",
        "John Doe",
        "Michael Johnson",
        "Zara White"};

    int size = sizeof(names) / sizeof(names[0]);

    char *target = "John Doe";
    Results result = BinarySearchStrings(size, target, names);

    if (result.found == 1)
    {
        printf("The element \"%s\" found at index:  %d\n", target, result.index);
    }
    else
    {
        printf("Element %s not found\n", target);
    }

    return 0;
}