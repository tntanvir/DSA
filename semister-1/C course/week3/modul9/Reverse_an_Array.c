#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        int tamp = ar[i];
        ar[i] = ar[j];
        ar[j] = tamp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
    }

    return 0;
}
