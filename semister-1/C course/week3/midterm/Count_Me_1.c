#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else if (ar[i] % 3 == 0)
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);

    return 0;
}