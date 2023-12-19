#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ar[100001];
    scanf("%s", &ar);

    for (int i = 0; i < strlen(ar + 1) + 1; i++)
    {
        if (ar[i] == ',')
        {
            printf(" ");
        }
        else if (ar[i] >= 65 && ar[i] <= 90)
        {
            printf("%c", ar[i] + 32);
        }
        else
        {
            printf("%c", ar[i] - 32);
        }
    }

    return 0;
}