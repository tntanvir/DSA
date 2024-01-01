#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char ar[3][3];
        int a = 0, b = 0, c = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == 'A')
                {
                    a++;
                }
                else if (ar[i][j] == 'B')
                {
                    b++;
                }
                else
                {
                    c++;
                }
            }
        }
        if (a < b && a < c)
        {
            cout << "A" << endl;
        }
        else if (b < c)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "C" << endl;
        }
    }

    return 0;
}