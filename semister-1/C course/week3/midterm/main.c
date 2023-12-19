#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    int capital = 0;
    int small = 0;
    int num = 0;
    scanf("%d", &m);
    char str[10001];
    while (m != 0)
    {
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
            {
                capital++;
            }
            else if ('a' <= str[i] && str[i] <= 'z')
            {
                small++;
            }
            else if (48 <= str[i] && str[i] <= 57)
            {
                num++;
            }
        }

        printf("%d %d %d\n", capital, small, num);
        m--;
        small = 0, capital = 0, num = 0;
    }
    return 0;
}