#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c, r;
    scanf("%d %d", &c, &r);
    int a[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // main flag
    int flag = 1;
    // primari

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {

                if (a[i][j] != 1)
                {

                    flag = 0;
                    break;
                }
                        }
        }
    }
    // primari kornar
    int y = r - 1;
    int flag3 = 1;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i != j && y != j)
            {

                if (a[i][j] != 0)
                {
                    flag3 = 0;
                    break;
                }
            }
        }
        y--;
        // printf("\n");
    }
    // scoend
    int flag2 = 1;
    int x = r - 1;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (x == j)
            {
                if (a[i][j] != 1)
                {
                    flag2 = 0;
                    break;
                }
            }
        }
        x--;
    }

    if (flag == 1 && flag2 == 1 && flag3 == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}