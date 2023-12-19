#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        int n;
        char c;
        cin >> n;
        cin.ignore();
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}