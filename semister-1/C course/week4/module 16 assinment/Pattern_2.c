#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}