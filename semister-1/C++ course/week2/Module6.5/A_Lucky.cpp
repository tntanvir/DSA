#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int y = stoi(s);
        int sum1 = 0;
        int sum2 = 0;
        int cont = 0;
        while (y != 0)
        {
            if (cont != 3)
            {
                int n = y % 10;
                // cout << n << endl;
                sum1 += n;
                y = y / 10;
                cont++;
            }
            else
            {
                int n = y % 10;
                // cout << n << endl;
                sum2 += n;
                y = y / 10;
            }
        }
        // cout << sum1 << " " << sum2;
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}