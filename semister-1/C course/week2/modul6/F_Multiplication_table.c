#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mul;
    scanf("%d", &mul);
    for (int i = 1; i < 12 + 1; i++)
    {
        printf("%d * %d = %d\n", mul, i, mul * i);
    }

    return 0;
}