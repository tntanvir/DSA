#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int lop, tes;
    cin >> lop >> tes;
    int a[lop];
    for (int i = 0; i < lop; i++)
    {
        cin >> a[i];
    }

    long long int pre[lop];
    pre[0] = a[0];
    for (int i = 1; i < lop; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    while (tes--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum;
        if (l == 0)
        {

            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}