#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b && 1 <= a && 1 <= b)
    {
        printf("%d", a - b);
    }
    else
    {
        printf("0");
    }

    return 0;
}