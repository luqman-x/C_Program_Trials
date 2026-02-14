#include <stdio.h>
#include <string.h>

int main(void)
{
    int age;
    char name[50];

    printf("Eneter your age:");
    scanf("%d", &age);

    getchar();
    printf("Enetr Your name:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("\n--- Student Information ---\n");
    printf("Hello, %s!\n", name);
    printf("Age: %d\n", age);
    printf("%d*5 ", age);

    return 0;
}
