#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    int mas = a[0][0];
    if (c == r)
    {

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i == j)
                {

                    if (a[i][j] != mas)
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {

                        flag = 1;
                    }
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("ok");
    }
    else
    {
        printf("not ok");
    }

    return 0;
}