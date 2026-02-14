#include <stdio.h>
#include <math.h>

char *categorise(float value);
float temp_convert(float value);
int main(void)
{
    float temp_degree;
    float temp_fahrenheit;
    char *category;

    printf("Enter Tempreture in Degree Celcius \n");
    scanf("%f", &temp_degree);

    temp_fahrenheit = temp_convert(temp_degree);
    category = categorise(temp_fahrenheit);

    printf("The equavalent value of %.1f °C in Fahrenheit is %.1f \n ", temp_degree, temp_fahrenheit);
    printf("%s \n", category);

    return 0;
}

float temp_convert(float value)
{
    float answer = (1.8 * value) + 32;

    return answer;
}

char *categorise(float value)
{
    if (value >= 212.0)
        return "Above Boiling Point \n";
    else if (value >= 99.0)
        return "High Fever \n";
    else if (value >= 97.0)
        return "Normal \n";
    else if (value >= 32.0)
        return "Below Normal Tempreture \n";
    else
        return "below Freezing Point \n";
}
