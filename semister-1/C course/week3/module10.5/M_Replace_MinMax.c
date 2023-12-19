#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = INT_MAX;
    int max = INT_MIN;
    int iloc = 0;
    int jloc = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            iloc = i;
        }
        else if (ar[i] < min)
        {
            min = ar[i];
            jloc = i;
        }
    }
    // int j = n - 1;
    // for (int i = 0; i < j; i++)
    // {
    //     int tamp = ar[i];
    //     ar[i] = ar[j];
    //     ar[j] = tamp;
    //     j--;
    // }
    int tam = ar[iloc];
    ar[iloc] = ar[jloc];
    ar[jloc] = tam;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    // printf("%d %d", max, min);c
    return 0;
}
