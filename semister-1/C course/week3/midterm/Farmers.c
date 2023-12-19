#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int m, e, d, result;
    while (n != 0)
    {
        scanf("%d %d %d", &m, &e, &d);
        int mul = m * d;
        int res = mul / (m + e);
        result = d - res;
        printf("%d\n", result);
        n--;
    }
    return 0;
}