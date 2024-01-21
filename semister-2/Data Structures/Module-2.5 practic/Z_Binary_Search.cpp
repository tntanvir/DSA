#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop, tes;
    cin >> lop >> tes;
    vector<int> v(lop);
    for (int i = 0; i < lop; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < tes; i++)
    {
        int n;
        cin >> n;
        auto it = find(v.begin(), v.end(), n);
        if (it != v.end())
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}