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
        char ar[n];
        int cnt[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int vlue = ar[i] - 'A';
            if (cnt[vlue] > 0)
            {

                cnt[vlue]++;
            }
            else
            {

                cnt[vlue] += 2;
            }

            // cout << vlue << " " << cnt[vlue] << endl;
        }
        int sum = 0;
        for (int i = 0; i <= 25; i++)
        {
            if (cnt[i] != 0)
            {

                // cout << cnt[i] << endl;
                sum += cnt[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}