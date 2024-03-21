#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    while (lop--)
    {
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            char chr;
            cin >> chr;
            if (chr == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a < b)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }

    return 0;
}