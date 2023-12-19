#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // primari
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    // printf("%d", sum);
    // scoend
    int flag = n - 1;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (flag == j)
            {
                sum2 += a[i][j];
                        }
        }
        flag--;
    }
    int res = sum - sum2;
    if (res < 0)
    {

        printf("%d", res * -1);
    }
    else
    {
        printf("%d", res);
    }

    return 0;
}