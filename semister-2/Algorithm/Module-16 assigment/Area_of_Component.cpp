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
int cnt;

void Dfs(int sr, int sc)
{
    vst[sr][sc] = true;
    // cout << mat[sr][sc] << endl;
    cnt++;

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
    vector<int> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (vst[i][j] == false && mat[i][j] != '-')
            {
                cnt = 0;
                Dfs(i, j);
                // cout << cnt << endl;
                v.push_back(cnt);
            }
        }
    }
    int min = INT_MAX;
    if (v.empty())
    {
        cout << "-1" << endl;
    }
    else
    {

        for (int x : v)
        {
            if (x <= min)
            {
                min = x;
            }
        }
        cout << min << endl;
    }
    return 0;
}
