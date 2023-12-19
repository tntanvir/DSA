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

    int flag = 1;
    int lin = r - 1;
    if (c == r)
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {

                if (j != lin)
                {
                    // printf("%d", a[i][j]);
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
            lin--;
        }
    }
    else
    {
        flag = 0;
    }

    if (flag == 0)
    {
        printf("Not Diagonal");
    }
    else
    {
        printf("secend Diagonal");
    }

    return 0;
}