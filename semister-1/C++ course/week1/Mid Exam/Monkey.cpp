#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ar[100005];
    int b = 0;

    while (cin.getline(ar, 100005))
    {
        for (int i = 0; ar[i] != '\0'; i++)
        {
            b++;
        }
        sort(ar, ar + b);
        for (int i = 0; i < b; i++)
        {
            if (ar[i] >= 'a' && ar[i] <= 'z')
            {

                cout << ar[i];
            }
        }
        b = 0;
        cout << endl;
    }

    return 0;
}