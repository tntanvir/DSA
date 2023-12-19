#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    scanf("%c", &input);
    if (input >= 48 && input <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (input >= 'A' && input <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}