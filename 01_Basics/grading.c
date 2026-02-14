#include <stdio.h>
#include <string.h>

int main()
{
    char NameOfCourse[100];
    float score;
    int num;

    printf("Enter the number courses: ");
    scanf("%d", &num);

    getchar();
    printf("Whhich course do you want to grade?");
    fgets(NameOfCourse, sizeof(NameOfCourse), stdin);
    NameOfCourse[strcspn(NameOfCourse, "\n")] = 0;

    printf("======== Grading System=======\n");
    printf("%s\n", NameOfCourse);

    return 0;
}