#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout << s;
    stringstream ss(s);
    stringstream yy(s);
    string word;
    string hlw;
    int count = 0;
    int count2 = 0;
    while (ss >> hlw)
    {
        count++;
    }
    // cout << count;

    while (yy >> word)
    {
        reverse(word.begin(), word.end());
        if (count2 != count - 1)
        {
            cout << word << " ";
            count2++;
        }
        else
        {
            cout << word;
        }
    }
    return 0;
}