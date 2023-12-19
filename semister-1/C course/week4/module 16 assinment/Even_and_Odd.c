#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int evn = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", evn, odd);
}
int main(int argc, char const *argv[])
{

    odd_even();

    return 0;
}