#include <stdio.h>
static int shock = 0;
float impedence;
int rhythm;

int assess_shork(int rhythm, float impedence)
{
    if (impedence > 150)
    {
        return 0;
    }
    else if ((rhythm == 1) || (rhythm == 2))
    {
        shock++;
        printf("SHOCK ADVICED. Total shock recommended: %d\n", shock);
        return 1;
    }
    else
    {
        printf("Normal Sinus rhythm");
        return 0;
    }
}

int main()
{
    printf("Enter the Impedence: ");
    scanf("%f", &impedence);

    printf("Enter the Rhythm: ");
    scanf("%d", &rhythm);

    assess_shork(rhythm, impedence);

    return 0;
}