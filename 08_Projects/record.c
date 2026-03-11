#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient_record
{
    int patient_id;
    float white_blood_cell_count;
    char diagnosis[50];
};

void update_diagnosis(struct patient_record *p)
{
    if (p->white_blood_cell_count > 11.0) // Fix 1
    {
        strcpy(p->diagnosis, "Leukocytocis (Infection Flagged)"); // Fix 2
    }
    else
    {
        strcpy(p->diagnosis, "Normal Range"); // Fix 3
    }
}

int main()
{
    struct patient_record s1; // Fix 4

    printf("Enter Patient ID: ");
    scanf("%d", &s1.patient_id); // Fix 5

    printf("Enter White blood cell count: ");
    scanf("%f", &s1.white_blood_cell_count); // Fix 6

    update_diagnosis(&s1);

    printf("====Patient Record====\n");
    printf("Patient ID: %d\n", s1.patient_id);                // Fix 7
    printf("Patient WBC: %.2f\n", s1.white_blood_cell_count); // Fix 8
    printf("Diagnosis: %s\n", s1.diagnosis);                  // Fix 9

    return 0;
}