#include <stdio.h>
int main()
{
    int x = 10;

    int y = 0;

    if (x % 2 == 0)
    {
        y += x;
    }
    else
    {
        y--;
    }

    printf("%d", y);
    return 0;
}
