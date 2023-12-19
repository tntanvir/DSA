// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int pos;
//     scanf("%d", &pos);
//     for (int i = pos + 1; i < n; i++)
//     {
//         // printf("%d ", i);
//         ar[i - 1] = ar[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d ", ar[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}