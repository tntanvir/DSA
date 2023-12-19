#include <stdio.h>
long long int summation(int *a, int st, int end)
{
    long long int sum = 0;
    if (st == end)
        return sum;
    sum = summation(a, st + 1, end);
    return sum += a[st];
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
    long long int sum = summation(a, 0, n);
    printf("%lld", sum);

    return 0;
}