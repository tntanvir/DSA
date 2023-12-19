// Jessica
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout << s;
    bool flag = false;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        // cout << word << endl;
        if (word == "Jessica")
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}