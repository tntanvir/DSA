// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int pos, val;
//     scanf("%d %d", &pos, &val);
//     for (int i = n + 1; i > pos; i--)
//     {
//         // printf("%d", i);
//         ar[i] = ar[i - 1];
//     }
//     ar[pos] = val;
//     for (int i = 0; i < n + 1; i++)
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
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos, vlu;
    scanf("%d %d", &pos, &vlu);

    for (int i = n; pos <= i; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = vlu;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
