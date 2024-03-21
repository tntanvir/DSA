#include <bits/stdc++.h>
using namespace std;
char gr[20][20];
bool vis[20][20];
int r, c;

vector<pair<int, int>> p = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    return true;
}
void Dfs2D(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + p[i].first;
        int cj = sj + p[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            Dfs2D(ci, cj);
        }
    }
};
int main()
{

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char b;
            cin >> b;
            gr[i][j] = b;
        }
    }
    int si, sj;
    memset(vis, false, sizeof(vis));
    cin >> si >> sj;
    Dfs2D(si, sj);

    return 0;
}