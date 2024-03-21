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
        int ar[n];
        int ans = INT_MIN;
        int ax, ay;
        int i = 0;
        int j = n - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        while (i < j)
        {
            if (min(ar[i], ar[j]) > ans)
            {
                ans = min(ar[i], ar[j]);
                ax = i;
                ay = j;
            }
            if (ar[i] < ar[j])
                i++;
            else
                j--;
        }
        cout << ax << " " << ay << endl;
    }

    return 0;
}