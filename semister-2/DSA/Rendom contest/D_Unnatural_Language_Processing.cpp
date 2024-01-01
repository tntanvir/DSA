#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int y;
        cin >> y;
        int a[y];
        for (int i = 0; i < y; i++)
        {
            cin >> a[i];
        }
        int sz = 0;
        string s;
        for (int i = 0; i < y; i++)
        {
            if (sz == 3)
            {
                s.empty();
            }

            s.push_back(a[i]);
            if (s == "ba")
            {
                cout << "ba"
                     << ".";
                s.empty();
            }
            else if (s == "ced")
            {
                cout << "ced"
                     << ".";
                s.empty();
            }
            else if (s == "bab")
            {
                cout << "bab"
                     << ".";
                s.empty();
            }
        }
    }

    return 0;
}