#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x, y = 0;
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                y = 1;
            }
        }
    }
    if (y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}