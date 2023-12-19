#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int inparr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inparr[i]);
    }
    int sum = 0;
    int nag = 0;
    for (int i = 0; i < n; i++)
    {
        if (inparr[i] > 0)
        {
            sum += inparr[i];
        }
        else
        {
            nag += inparr[i];
        }
    }
    printf("%d %d", sum, nag);
    return 0;
}