#include <stdio.h>

typedef struct
{
    int index;
    int value;
    int found;
} Results;

Results BinarySearch(int array[], int target, int size)
{
    Results res = {-1, -1, 0};

    if (size <= 0)
        return res;

    int lower_bound = 0;
    int upper_bound = size - 1;

    while (lower_bound <= upper_bound)
    {
        int mid = lower_bound + (upper_bound - lower_bound) / 2;

        if (array[mid] == target)
        {
            res.index = mid;
            res.value = array[mid];
            res.found = 1;
            return res;
        }
        else if (array[mid] > target)
        {
            upper_bound = mid - 1;
        }
        else
        {
            lower_bound = mid + 1;
        }
    }

       res.index = lower_bound; // insertion point
    res.value = target;
    res.found = 0;

    return res;
}

int main()
{
    int array[] = {1, 2, 4, 6, 7, 8, 9, 12, 27, 32};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 5; // trying a number NOT in the list

    Results result = BinarySearch(array, target, size);

    if (result.found)
    {
        printf("Element %d found at index %d\n", result.value, result.index);
    }
    else
    {
        printf("Element not found.\n");
        printf("It should be inserted at index %d\n", result.index);
    }

    return 0;
}