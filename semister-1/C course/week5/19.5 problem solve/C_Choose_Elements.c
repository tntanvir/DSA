#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                long long int tam = ar[i];
                ar[i] = ar[j];
                ar[j] = tam;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (ar[i] < 0)
        {
            break;
        }
        else
        {
            sum = sum + ar[i];
        }
    }
    printf("%lld", sum);

    return 0;
}