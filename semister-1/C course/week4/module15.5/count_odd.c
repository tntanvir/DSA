#include <stdio.h>
int count_odd(int ar[], int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
        {
            num++;
        }
    }

    return num;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int num = count_odd(ar, n);
    printf("%d", num);
    return 0;
}