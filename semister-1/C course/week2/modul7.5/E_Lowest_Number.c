#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d ", min);
    int locatin = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            locatin += i;
            break;
        }
    }
    printf("%d", locatin);

    return 0;
}