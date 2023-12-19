#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c, r;
    scanf("%d%d", &c, &r);
    int a[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = c - 1; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = r - 1; j < r; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}