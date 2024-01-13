#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    while (n--)
    {

        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> m;
        string font;
        int max = 0;
        while (ss >> word)
        {
            // cout << word << endl;
            m[word]++;
            if (m[word] > max)
            {
                font = word;
                max = m[word];
            }
        }

        cout << font << " " << max << endl;
    }

    return 0;
}