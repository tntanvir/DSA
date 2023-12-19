#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int lop;
    scanf("%d", &lop);

    for (int i = 0; i < lop; i++)
    {
        long long int a, b, c, res;
        scanf("%lld%lld%lld%lld", &res, &a, &b, &c);
        int flag = 0;

        if (res == 0)
        {
            printf("%d\n", 0);
        }
        else
        {
            double m = a * b * c;
            double k = res / m;

            // printf("K=%f\n", k);

            long long int x = ceil(k);
            if (x != k)
            {
                // flag = 0;
                flag = 1;
            }
            else
            {
                printf("%lld\n", x);
                // printf("-1\n");
            }
        }
        if (flag == 1)
        {
            printf("-1\n");
        }
        // flag = 0;
    }

    return 0;
}