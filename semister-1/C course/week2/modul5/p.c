
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int sum = num / 1000;
    if (num > 999 && num <= 9999)
    {
        if (sum % 2 == 0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    return 0;
}
