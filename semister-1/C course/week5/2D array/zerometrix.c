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
    int count = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (a[i][j] == 0)
            {

                count++;
            }
        }
    }

    if (count == (r * c))
    {
        printf("Zero metrix");
    }
    else
    {
        printf("Not zero metrix");
    }

    return 0;
}