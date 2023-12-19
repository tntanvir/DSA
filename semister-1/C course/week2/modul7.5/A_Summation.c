#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int inp;
    scanf("%d", &inp);
    int inparr[inp];
    for (int i = 0; i < inp; i++)
    {
        scanf("%d", &inparr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < inp; i++)
    {

        // printf("%d", inparr[i]);
        sum += inparr[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}