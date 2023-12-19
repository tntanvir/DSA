#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    char n[10001];
    scanf("%s", &n);

    int sum = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        int vlu = n[i] - 48;
        sum += vlu;
    }
    printf("%d", sum);

    return 0;
}