#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // arr[1] = 1000;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int location, value;
    scanf("%d %d", &location, &value);
    ar[location] = value;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}