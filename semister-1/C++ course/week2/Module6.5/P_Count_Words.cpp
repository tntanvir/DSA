#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout << s;
    bool bol = false;
    int count = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (bol == false)
            {
                count++;
                bol = true;
            }
        }
        else
        {
            bol = false;
        }
    }
    cout << count << endl;

    return 0;
}