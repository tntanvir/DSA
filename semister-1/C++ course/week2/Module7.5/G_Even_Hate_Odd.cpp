#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int div = n / 2;
        int even = 0;
        int odd = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            int res = abs(div - odd);
            cout << res << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}