#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    while (num != 0)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int ok = 0;
        int find;
        scanf("%d", &find);
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == find)
            {
                ok = 1;
            }
        }
        if (ok == 1)
        {
            printf("YES\n");
            ok = 0;
        }
        else
        {
            printf("NO\n");
        }

        num--;
    }

    return 0;
}