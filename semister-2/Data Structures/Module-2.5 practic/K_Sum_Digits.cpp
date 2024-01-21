#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int y;
    scanf("%d", &y);
    char n[y];
    scanf("%c", &n);

    for (int i = 0; i < y; i++)
    {
        scanf("%s", &n[i]);
    }
    int sum = 0;
    for (int i = 0; i < y; i++)
    {
        int vlu = n[i] - 48;
        sum += vlu;
    }
    printf("%d", sum);

    return 0;
}