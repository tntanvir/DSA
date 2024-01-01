#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    while (lop--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            sum += y;
        }
        long long int nw = sqrt(sum);
        // cout << nw << endl;
        if (nw * nw != sum)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}