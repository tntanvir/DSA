#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    for (int i = 0; i < 6; i++)
    {
        // printf("%d %d %d\n", a, b, c);
        if (a + b - c == d)
        {
            printf("YES");
            break;
        }
        else if (a + b * c == d)
        {
            printf("YES");
            break;
        }
        else if (a - b * c == d)
        {
            printf("YES");
            break;
        }
        else if (a - b + c == d)
        {
            printf("YES");
            break;
        }
        else if (a * b + c == d)
        {
            printf("YES");
            break;
        }
        else if (a * b - c == d)
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
            break;
        }
    }

    return 0;
}