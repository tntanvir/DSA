#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    while (scanf("%d", &input) != EOF)
    {

        if (input == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}