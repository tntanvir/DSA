#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int vis[N][N];
pair<int, int> path[N][N];
vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
int sx, sy, ex, ey;

bool isValid(int x, int y)
{
    return !vis[x][y] && (x >= 0) && (x < n) && (y >= 0) && (y < m);
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto mv : moves)
        {
            int new_x = x + mv.first;
            int new_y = y + mv.second;
            // cout << new_x << new_y << endl;
            if (isValid(new_x, new_y))
            {
                vis[new_x][new_y] = true;
                // path[new_x][new_y] = {mv.first, mv.second};
                path[new_x][new_y] = {mv.first, mv.second};
                q.push({new_x, new_y});
            }
        }
    }
}
char gid[N][N];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            path[i][j] = {-1, -1};
            char c;
            cin >> c;
            gid[i][j] = c;
            if (c == '#')
            {
                vis[i][j] = true;
            }
            if (c == 'R')
            {
                sx = i;
                sy = j;
            }
            if (c == 'D')
            {
                ex = i;
                ey = j;
            }
        }
    }
    bfs();
    if (!vis[ex][ey])
    {
        // cout << "NO" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << gid[i][j];
            }

            cout << endl;
        }
        return 0;
    }
    // cout << "YES" << endl;
    vector<pair<int, int>> ans;
    pair<int, int> dest = {ex, ey};

    while (dest.first != sx or dest.second != sy)
    {
        ans.push_back({path[dest.first][dest.second]});

        dest.first -= ans.back().first;
        dest.second -= ans.back().second;
        // cout << dest.first << " " << dest.second << endl;
        if (gid[dest.first][dest.second] != 'D' && gid[dest.first][dest.second] != 'R')
        {
            gid[dest.first][dest.second] = 'X';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << gid[i][j];
        }

        cout << endl;
    }

    return 0;
}