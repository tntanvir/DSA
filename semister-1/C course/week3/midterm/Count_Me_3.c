#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char inp[10001];
    int cl = 0, sl = 0, d = 0;
    while (n != 0)
    {
        scanf("%s", &inp);
        for (int i = 0; i < strlen(inp); i++)
        {
            if ('a' <= inp[i] && inp[i] <= 'z')
            {
                sl++;
            }
            else if ('A' <= inp[i] && inp[i] <= 'Z')
            {
                cl++;
            }
            else if (48 <= inp[i] && inp[i] <= 57)
            {
                d++;
            }
        }

        printf("%d %d %d\n", cl, sl, d);
        sl = 0, cl = 0, d = 0;
        n--;
    }
    return 0;
}