#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Variable
static int infected_count = 0;
// Struct
typedef struct
{
    char name[50];
    int ID;
    int wbc;
    char *diagnosis;

} Patient;

// Functions
char *Analyze_wbc(int wbc)
{
    if (wbc < 4)
    {
        return "Low Immumity";
    }
    else if (wbc >= 4 && wbc <= 11)
    {
        return "Normal";
    }
    else
    {
        infected_count = infected_count + 1;
        return "Infection";
    }
}
int main_2()
{
    // Variables in Int Main
    int total_wbc_count = 0;
    int num_of_patients;

    printf("How many patients do you think you are to take thier Information?\n");
    scanf("%d", &num_of_patients);

    Patient info[num_of_patients];
    for (int i = 0; i < num_of_patients; i++)
    {
        printf("\nEnter Patient Name\n ");
        scanf("%s", info[i].name);

        printf("Enter Patient ID: ");
        scanf("%d", &info[i].ID);

        printf("Enter Patient White Blood Cell Count: ");
        scanf("%d", &info[i].wbc);

        total_wbc_count = total_wbc_count + info[i].wbc;

        info[i].diagnosis = Analyze_wbc(info[i].wbc);
    }

    // Calculating Average
    float average_wbc = total_wbc_count / num_of_patients;

    int max_wbc = info[0].wbc;
    int min_wbc = info[0].wbc;
    char max_patient_name[50];
    strcpy(max_patient_name, info[0].name);

    char min_patient_name[50];
    strcpy(min_patient_name, info[0].name);

    int max_id = info[0].ID;
    int min_id = info[0].ID;

    for (int i = 0; i < num_of_patients; i++)
    {
        if (info[i].wbc > max_wbc)
        {
            max_wbc = info[i].wbc;
            strcpy(max_patient_name, info[0].name);
            int max_id = info[i].ID;
        }
        if (info[i].wbc < min_wbc)
        {
            min_wbc = info[i].wbc;
            strcpy(min_patient_name, info[0].name);
            min_id = info[i].ID;
        }
    }

    // Display Results
    printf("\n====Patient Information====\n");
    for (int i = 0; i < num_of_patients; i++)
    {
        printf("Patient Name:%s \n", info[i].name);
        printf("Patient ID:%d \n", info[i].ID);
        printf("Patient Diagnosis Results:%s \n\n", info[i].diagnosis);
    }

    printf("====Data Analysis On WBC====\n");
    printf("Number of Infected Patients:%d \n", infected_count);
    printf("Average WBC:%.2f \n", average_wbc);

    printf("\n===Max Patient Info===\n");
    printf("Name: %s\n", max_patient_name);
    printf("ID;%d \n", max_id);
    printf("WBC:%d \n", max_wbc);

    printf("\n===Min Patien Info===\n");
    printf("Name: %s\n", min_patient_name);
    printf("ID;%d \n", min_id);
    printf("WBC:%d \n", min_wbc);

    return 0;
}
