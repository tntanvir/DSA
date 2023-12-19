// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int y;
//     scanf("%d", &y);
//     for (int i = 0; i < y; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         int ar[100];
//         int cnt = 0;
//         for (int i = 0; n != 0; i++)
//         {
//             int y = n % 10;
//             n = n / 10;
//             ar[i] = y;
//             cnt++;
//         }
//         for (int i = cnt - 1; i >= 0; i--)
//         {
//             printf("%d ", ar[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
void usr_recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    int y = n % 10;
    n = n / 10;
    usr_recursion(n);
    printf("%d ", y);
}
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        usr_recursion(n);
        if (n == 0)
        {
            printf("%d", 0);
        }

        printf("\n");
    }

    return 0;
}