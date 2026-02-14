#include <stdio.h>

int main(void)
{

    /* Grading System Design for Biomedical Engineering Department */

    float std_score;
    int num_of_courses;
    char std_name[50];
    char grade;
    int std_id;

    printf("Enter Student Name(Firts NAme):\n");
    scanf("%s", std_name);

    printf("Enter Student Id:\n ");
    scanf("%d", &std_id);

    printf("Enetr the number of courses took this semester(Enetr an integer): \n");
    scanf("%d", &num_of_courses);

    printf("=========Grading Sytem=======\n");
    printf("Name: %s\n", std_name);
    printf("Student ID: %d\n", std_id);

    for (int i = 1; i <= num_of_courses; i++)
    {
        printf("Enetr The Score of the course:\n ");
        scanf("%f", &std_score);

        if (std_score >= 70.0 && std_score <= 100.0)
            printf("Grade: A\n\n");
        else if (std_score >= 60.0)
            printf("Grade: B\n\n");
        else if (std_score >= 50.0)
            printf("Grade: C\n\n");
        else if (std_score >= 40.0)
            printf("Grade: D\n\n");
        else
            printf("Grade: F\n\n");
    }

    return 0;
}