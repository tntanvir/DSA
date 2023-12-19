#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        string sen;
        string sen2;
        cin >> sen;
        cin.ignore();
        cin >> sen2;
        int cunt = sen2.size();
        // int foud = sen.find(sen2);
        while (sen.find(sen2) != -1)
        {
            sen.replace(sen.find(sen2), cunt, "#");
        }

        cout << sen << endl;
    }

    return 0;
}