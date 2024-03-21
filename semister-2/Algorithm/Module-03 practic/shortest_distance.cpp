#include <bits/stdc++.h>
using namespace std;
vector<int> ar[1005];
bool vis[1005];
int level[1005];
int path[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : ar[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                path[child] = par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    int lop;
    cin >> lop;
    while (lop--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(path, -1, sizeof(path));
        bfs(src);

        cout << level[des] << endl;
    }

    return 0;
}