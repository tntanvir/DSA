#include <bits/stdc++.h>
using namespace std;

char mat[1005][1005];
bool vst[1005][1005];
int sr, sc, er, ec;
int r;
int c;
vector<pair<int, int>> p = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool flg = false;

bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    return true;
}

void Dfs(int sr, int sc)
{
    vst[sr][sc] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = sr + p[i].first;
        int cj = sc + p[i].second;
        if (valid(ci, cj) == true && vst[ci][cj] == false && ci == er && cj == ec)
        {
            flg = true;
        }
        if (valid(ci, cj) == true && vst[ci][cj] == false && mat[ci][cj] != '-')
        {
            Dfs(ci, cj);
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
            char ch;
            cin >> ch;
            mat[i][j] = ch;
        }
    }
    memset(vst, false, sizeof(vst));
    cin >> sr >> sc >> er >> ec;
    if (sr == er && sc == ec)
    {
        flg = true;
    }
    else
    {
        Dfs(sr, sc);
    }

    if (flg)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
