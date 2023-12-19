#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            sum++;
        }
    }

    if (sum % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}