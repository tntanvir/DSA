#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
bool vis[1005][1005];
int dis[1005][1005];
int grd1, grd2;

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, 1};

bool valid(int x, int y)
{
    return x >= 0 && x < grd1 && y >= 0 && y < grd2 && !vis[x][y] && grid[x][y] != -1;
}

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> pre = q.front();
        q.pop();
        int x = pre.first;
        int y = pre.second;
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (valid(nx, ny))
            {
                q.push({nx, ny});
                vis[nx][ny] = true;
                dis[nx][ny] = dis[x][y] + 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> grd1 >> grd2;
        int src1, src2;
        cin >> src1 >> src2;
        int end, end2;
        cin >> end >> end2;

        memset(dis, -1, sizeof(dis));
        memset(vis, false, sizeof(vis));

        bfs(src1, src2, end, end2);
        cout << dis[end][end2] << endl;
    }

    return 0;
}
