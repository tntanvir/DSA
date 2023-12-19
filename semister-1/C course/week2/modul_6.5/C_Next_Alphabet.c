#include <stdio.h>
int main(int argc, char const *argv[])
{
    char letter;
    scanf("%c", &letter);
    if (letter == 'z')
    {
        printf("a");
    }
    else
    {

        printf("%c", letter + 1);
    }
    return 0;
}