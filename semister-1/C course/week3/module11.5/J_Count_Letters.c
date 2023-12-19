#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    int ar[26] = {0};

    while (scanf("%c", &c) != EOF)
    {
        ar[c - 'a']++;
    }
    for (char i = 97; i <= 122; i++)
    {
        if (ar[i - 'a'] != 0)
        {
            /* code */

            printf("%c : %d\n", i, ar[i - 'a']);
        }
    }

    return 0;
}