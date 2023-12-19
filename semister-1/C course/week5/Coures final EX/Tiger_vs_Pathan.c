#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lop;
    scanf("%d", &lop);
    for (int i = 0; i < lop; i++)
    {
        int n;
        scanf("%d", &n);
        char a[n];
        for (int i = 0; i < n; i++)
        {
            scanf(" %c", &a[i]);
        }
        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }
        if (t > p)
        {
            printf("Tiger\n");
        }
        else if (p > t)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
        t = 0;
        p = 0;
    }

    return 0;
}