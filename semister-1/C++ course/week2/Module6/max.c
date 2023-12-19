// #include <stdio.h>
// void max(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         printf("max num a:%d", a);
//     }
//     else if (b > c)
//     {
//         printf("max num b:%d", b);
//     }
//     else
//     {
//         printf("max num c:%d", c);
//     }
// }

// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     max(a, b, c);
//     return 0;
// }

// 1 to 100
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n, i, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; ++i)
//     {
//         sum += i;
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }
