#include <stdio.h>

int main()
{
    int age = 24;
    char name[] = "Lukmanu";
    char sex = 'M';
    float accBalance = 98.96;
    int age_plus_one = ++age;
    int age_minus_onw = --age;
    int age_mod = age % 5;
    float accBalance_multiplied = accBalance * 5;

    printf("My name is %s, I am %d years old with a whopping ₵%.3f in my bank accoun\n", name, age, accBalance);
    printf("Gender: %c\n", sex);
    printf("But..................\n");
    printf("I will be %d nex year\n", age_plus_one);
    printf("I was %d year old last year\n", age_minus_onw);
    printf("As for this I know you dont care about that but, my acount balance multiplied by 5 is ₵%.3f\n", accBalance_multiplied);
    printf("Well, the module of my age is %d\n", age_mod);

    printf("%d\n", age == 7);
    printf("%d\n", age > 12);
    printf("%d\n", age < 15);
    printf("%d\n", age != 15);
    printf("%d\n", age >= 15);
    printf("%d\n", age <= 15);

    printf("This is the second part\n");
    int randomValue = 19;
    printf("%d\n", (age > 12) && (randomValue > 5));
    printf("%d\n", (age > 12) || (randomValue > 5));
    printf("%d\n", !(age == 21));
    return 0;
}