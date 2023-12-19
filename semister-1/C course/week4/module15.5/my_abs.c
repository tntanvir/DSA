#include <stdio.h>
int my_abs(int n)
{
    if (n > 0)
    {
        return n;
    }
    else
    {
        return n * -1;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int res = my_abs(n);
    printf("%d", res);
    return 0;
}