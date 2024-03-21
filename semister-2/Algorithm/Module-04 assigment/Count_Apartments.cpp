#include <bits/stdc++.h>
using namespace std;
int r, c;
char gid[1000][1000];
bool vst[1000][1000];

vector<pair<int, int>> p = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    return true;
}
int cnt = 0;
void Dfs2D(int si, int sj)
{

    vst[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + p[i].first;
        int cj = sj + p[i].second;
        if (valid(ci, cj) == true && vst[ci][cj] == false && gid[ci][cj] == '.')
        {

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
        }
    }
    memset(vst, false, sizeof(vst));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (gid[i][j] == '.' && vst[i][j] == false)
            {
                Dfs2D(i, j);
                cnt++;
            };
        }
    }
    cout << cnt << endl;
    return 0;
}