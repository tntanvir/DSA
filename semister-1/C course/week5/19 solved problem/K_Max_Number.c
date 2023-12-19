#include <stdio.h>
#include <limits.h>
int maxnum(int *a, int n, int i)
{

    if (i == n)
    {
        return INT_MIN;
    }
    int max = maxnum(a, n, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int res = maxnum(a, n, 0);
    printf("%d", res);
    return 0;
}