#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lop;
    scanf("%d", &lop);
    int arr[lop];
    for (int i = 0; i < lop; i++)
    {
        scanf("%d", &arr[i]);
    }
    int find;
    int location = 0;
    int x = 0;
    scanf("%d", &find);
    for (int i = 0; i < lop; i++)
    {
        if (find == arr[i])
        {
            location += i;
            x = 1;
            break;
        }
    }
    if (x)
    {
        printf("%d", location);
    }
    else
    {
        printf("-1");
    }

    return 0;
}