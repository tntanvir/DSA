#include <bits/stdc++.h>
using namespace std;
bool vst[10005];
int parent[10005];
vector<int> ar[10005];
bool ans;
void bFs(int src)
{
    queue<int> q;
    q.push(src);
    vst[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int x : ar[par])
        {
            if (vst[x] && parent[par] != x)
            {
                ans = true;
            }
            if (vst[x] == false)
            {
                q.push(x);
                vst[x] = true;
                parent[x] = par;
            }
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
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    memset(vst, false, sizeof(vst));
    memset(parent, -1, sizeof(parent));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (vst[i] == false)
        {
            bFs(i);
        }
    }
    if (ans)
    {
        cout << "cycle Detect" << endl;
    }
    else
    {
        cout << "NO Cycle" << endl;
    }
    return 0;
}