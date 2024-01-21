#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(26, 0);
    char s;
    while (cin >> s)
    {
        v[s - 'a']++;
    }
    for (char i = 97; i <= 122; i++)
    {
        if (v[i - 'a'] != 0)
        {
            cout << i << " "
                 << ":"
                 << " " << v[i - 'a'] << endl;
        }
    }

    return 0;
}