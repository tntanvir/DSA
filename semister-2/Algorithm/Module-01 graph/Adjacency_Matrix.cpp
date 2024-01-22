#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int matx[n][n];
    memset(matx, 0, sizeof(matx));
    // cout << sizeof(matx);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        matx[a][b] = 1;
        matx[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matx[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}