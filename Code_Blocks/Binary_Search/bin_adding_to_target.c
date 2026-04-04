#include <stdio.h>
typedef struct
{
    int index;
    int complement;
    int value;
    int found;
} Results;

Results Sum_Two_Target(int array[], int size, int target)
{
    Results res = {-1, -1, -1, 0};
    int seen[1000] = {0};
    /**
     * Initializes `res` with sentinel defaults:
     * - `-1` for the first three fields means "not set / not found yet"
     *   (useful when valid computed values are expected to be non-negative).
     * - `0` for the last field sets a neutral starting value, typically used
     *   for a counter, score, or status flag with zero as the default state.
     *
     * This makes it easy to detect later whether each field was updated by
     * the algorithm.
     */

    for (int i = 0; i < size; i++)
    {
        int complement = target - array[i];

        if (seen[complement] == 1)
        {
            res.complement = complement;
            res.index = i;
            res.value = array[i];
            res.found = 1;
            return res;
        }

        seen[array[i]] = 1;
    }
    return res;
}
int main()
{
    int array[] = {2, 3, 4, 5, 6, 7, 2, 9, 0};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 9;

    Results finals = Sum_Two_Target(array, size, target);

    if (finals.found == 1)
    {
        printf("The pair that sum up to %d is %d and %d\n", target, finals.value, finals.complement);
    }
    else
    {
        printf("Pairs not found\n");
    }

    return 0;
}