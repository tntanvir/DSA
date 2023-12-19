#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n + 2; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            printf("*");
        }
        if (i <= n)
        {
            printf("\n");
        }

        n--;
    }
    return 0;
}