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
    if (p->white_blood_cell_count > 11.0)
    {
        strcpy(p->diagnosis, ("Leukocytocis (Infection Flagged)"));
    }
    else
    {
        strcpy(p->diagnosis, "Normal Range");
    }
}

int main()
{

    struct patient_record s1;
    printf("Enter Patient ID: ");
    scanf("%d", &s1.patient_id);

    printf("Enter White blood cell count: ");
    scanf("%f", &s1.white_blood_cell_count);

        update_diagnosis(&s1);

    printf("\n====Patient Record====\n");
    printf("patient_record ID: %d\n ", s1.patient_id);
    printf("patient WBC ID: %.2f\n ", s1.white_blood_cell_count);
    printf("Diagnosis: %s", s1.diagnosis);

    return 0;
}
