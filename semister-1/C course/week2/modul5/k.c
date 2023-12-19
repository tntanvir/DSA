#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {

        max = a;
    }
    else if (b > c)
    {

        max = b;
    }
    else
    {

        max = c;
    }
    if (a < b && a < c)
    {

        min = a;
    }
    else if (b < c)
    {

        min = b;
    }
    else
    {

        min = c;
    }
    printf("%d %d", min, max);
    return 0;
}