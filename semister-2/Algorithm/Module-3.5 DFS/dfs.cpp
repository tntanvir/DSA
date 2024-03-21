#include <bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
void Dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            Dfs(child);
        }
    }
};
int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    Dfs(0);

    return 0;
}