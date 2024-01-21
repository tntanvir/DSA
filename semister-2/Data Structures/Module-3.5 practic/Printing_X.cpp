#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = (n - 1) / 2;
    // cout << s << endl;
    int k = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == s && j == s)
            {
                cout << "X";
            }

            if (i == j && i != s && j != s)
            {
                cout << "\\";
            }
            if (k == j && i != s && j != s)
            {
                cout << "/";
            }

            if (i != j && k != j)
            {

                cout << " ";
            }
        }
        k--;
        cout << endl;
    }

    return 0;
}