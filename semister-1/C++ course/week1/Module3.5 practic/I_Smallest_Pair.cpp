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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // cout << ar[i] + ar[j] + j - i << endl;
                int nim = ar[i] + ar[j] + j - i;
                if (nim < min)
                {
                    min = nim;
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}