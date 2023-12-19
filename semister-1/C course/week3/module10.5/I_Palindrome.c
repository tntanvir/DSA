#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char ar[10001];

    scanf("%s", &ar);
    int j = strlen(ar) - 1;
    int num = 0;
    for (int i = 0; i < j; i++)
    {
        if (ar[i] != ar[j])
        {
            // char tamp = ar[i];
            // ar[i] = ar[j];
            // ar[j] = tamp;
            // j--;
            num = 1;
            break;
        }
        j--;
    }
    if (num == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}