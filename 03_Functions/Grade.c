#include <stdio.h>

char grading(float value);
char *categorize(float value);

int main(void)
{
    float score, cwa;
    float TotalWeight = 0.0;
    char grade;
    int num, credit;
    int TotalCredit = 0;
    char *category;

    printf("Enetr the number of courses taking this sester(Enter an integer): \n");
    scanf("%d", &num);

    // For Loop
    for (int i = 1; i <= num; i++)
    {
        printf("\nCourse %d\n ", i);
        printf("Enter the score of the course: \n");
        scanf("%f", &score);

        printf("Eneter the number of credit hours for the cpurse: \n");
        scanf("%d", &credit);

        grade = grading(score);
        printf("Grade: %c \n", grade);

        TotalWeight += (score * credit);
        TotalCredit += credit;
    }

    // CWA calculation
    if (TotalCredit == 0)
    {
        printf("Invalid: Total credit hours cant be zero.");
        return 1;
    }

    cwa = (TotalWeight / TotalCredit);
    printf("Your CWA for the %d Courses is %.2f \n", num, cwa);

    // Class Categorization
    category = categorize(cwa);
    printf("Class: %s", category);

    return 0;
}

char *categorize(float value)
{
    if (value >= 70.0 && value <= 100.0)
        return "First Class";
    else if (value >= 60.0)
        return "Second Class Upper";
    else if (value >= 50.0)
        return "Second Class Lower";
    else if (value >= 40.0)
        return "Pass";
    else
        return "Fail";
}

char grading(float value)
{
    if (value >= 70.0 && value <= 100.0)
        return 'A';
    else if (value >= 60.0)
        return 'B';
    else if (value >= 50.0)
        return 'C';
    else if (value >= 40.0)
        return 'D';
    else
        return 'F';
}
