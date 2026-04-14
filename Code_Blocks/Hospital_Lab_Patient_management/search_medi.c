#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int index;
    int found;
    char *value;
} drug_info;

// Functions
int compare(const void *a, const void *b)
{
    int res = strcmp(*(const char **)a, *(const char **)b);
    return res;
}

drug_info search_drug(char *drugs[], int size, char *target)
{
    drug_info result;
    result.index = -1;
    result.found = 0;
    result.value = NULL;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;
        int res = strcmp(target, drugs[mid]);

        if (res == 0)
        {
            result.index = mid;
            result.found = 1;
            result.value = drugs[mid];
            return result;
        }
        else if (res > 0)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}

int main()
{
    char target[100];
    char *drugs[] = {
        "Amoxicillin", "Paracetamol", "Ibuprofen", "Metformin",
        "Aspirin", "Ciprofloxacin", "Lisinopril", "Omeprazole",
        "Azithromycin", "Simvastatin", "Losartan", "Hydrochlorothiazide",
        "Atorvastatin", "Salbutamol", "Prednisolone", "Cetirizine",
        "Diclofenac", "Clindamycin", "Ranitidine", "Doxycycline"};

    int size = sizeof(drugs) / sizeof(drugs[0]);
    qsort(drugs, size, sizeof(char *), compare);

    for (int i = 0; i < size; i++)
    {
        printf("%d.%s\n", (i + 1), drugs[i]);
    }

    printf("\n\n\nEnter Name of Drug to search for:\n");
    scanf("%s", target);

    drug_info drug = search_drug(drugs, size, target);

    if (drug.found == 1)
    {
        printf("Drug %s found at %d\n", target, drug.index);
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}
