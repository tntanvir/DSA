#include <bits/stdc++.h>
using namespace std;
class frqe
{
public:
    char vlue;
    int cnt;
};
bool cmp(frqe a, frqe b)
{
    return a.cnt > a.cnt;
}
int main()
{
    string s;
    cin >> s;
    frqe ar[26];
    for (int i = 0; i < 26; i++)
    {
        ar[i].vlue = char(i + 'a');
        ar[i].cnt = 0;
    }
    for (char c : s)
    {
        int vlue = c - 'a';
        ar[vlue].cnt++;
    }
    sort(ar, ar + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (ar[i].cnt > 0)
        {
            for (int j = 0; j < ar[i].cnt; j++)
            {

                cout << ar[i].vlue;
            }
        }
    }
    cout << endl;

    return 0;
}