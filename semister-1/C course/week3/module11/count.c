#include <stdio.h>
#include <limits.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    int cnt1[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt1[ar[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d -%d\n", i, cnt1[i]);
    }

    return 0;
}