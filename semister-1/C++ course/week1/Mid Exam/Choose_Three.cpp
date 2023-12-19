#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        int n, res;
        cin >> n >> res;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    // cout << ar[i] << ar[j] << ar[k] << endl;
                    if (ar[i] + ar[j] + ar[k] == res)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
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