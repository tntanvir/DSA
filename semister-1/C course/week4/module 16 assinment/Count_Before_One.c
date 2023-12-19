#include <stdio.h>
int count_before_one(int ar[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != 1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
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
    int count = count_before_one(ar, n);
    printf("%d", count);

    return 0;
}