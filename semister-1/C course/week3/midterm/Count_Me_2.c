#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ar[100001];
    scanf("%s", &ar);
    int count = 0;
    for (int i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] != 'a' && ar[i] != 'e' && ar[i] != 'i' && ar[i] != 'o' && ar[i] != 'u')
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}