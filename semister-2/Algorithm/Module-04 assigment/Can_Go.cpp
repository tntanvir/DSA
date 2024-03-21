#include <bits/stdc++.h>
using namespace std;
int r, c;
char gid[1000][1000];
bool vst[1000][1000];
int ar, ac, br, bc;
vector<pair<int, int>> p = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    return true;
}
bool flg = false;
void Dfs2D(int si, int sj)
{
    // cout << si << " " << sj << endl;
    // cout << gid[si][sj] << endl;
    vst[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + p[i].first;
        int cj = sj + p[i].second;
        if (valid(ci, cj) == true && vst[ci][cj] == false && gid[ci][cj] != '#')
        {
            if (gid[ci][cj] == 'B')
            {
                flg = true;
            }
            else
                Dfs2D(ci, cj);
        }
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cin >> gid[i][j];
            if (gid[i][j] == 'A')
            {
                ar = i;
                ac = j;
            }
            if (gid[i][j] == 'B')
            {
                br = i;
                bc = j;
            }
        }
    }
    memset(vst, false, sizeof(vst));
    Dfs2D(ar, ac);
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << gid[i][j];
    //     }
    //     cout << endl;
    // }

    // cout << ar << ac << endl;
    // cout << br << bc << endl;
    if (flg == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}