#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char n[1000001];
    scanf("%s", &n);
    int sum = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        sum += n[i] - '0';
    }
    printf("%d", sum);
    return 0;
}