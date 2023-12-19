#include <stdio.h>
int sumTwo(int n, int m)
{
    int sum = n + m;
    return sum;
}
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int res = sumTwo(n, m);
    printf("%d", res);
    return 0;
}