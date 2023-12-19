#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lop;
    scanf("%d", &lop);
    for (int i = 0; i < lop; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int tam = a[i];
                    a[i] = a[j];
                    a[j] = tam;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = b[i] - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] < 0)
            {
                printf("%d ", c[i] * -1);
            }
            else
            {
                printf("%d ", c[i]);
            }
        }
        printf("\n");
    }

    return 0;
}