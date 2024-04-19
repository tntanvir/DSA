#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    // cout << i << endl;
    for (int i = 0; i < lop; i++)
    {
        int n, m, o;
        cin >> n >> m >> o;
        // cout << n << m << o << endl;
        if (n < m && m < o)
        {
            cout << "STAIR" << endl;
        }
        else if (n < m && m > o)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
    return 0;
}