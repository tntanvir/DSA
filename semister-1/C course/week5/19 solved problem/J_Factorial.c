#include <stdio.h>
long long int factorial(int n)
{
    long long int res = 0;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        res = factorial(n - 1);
    }
    return res * n;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    long long int res = factorial(n);
    printf("%lld", res);
    return 0;
}