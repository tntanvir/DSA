#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b % a == 0 || a % b == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }

    return 0;
}
