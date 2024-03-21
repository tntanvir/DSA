#include <bits/stdc++.h>
using namespace std;
bool vst[10005];
int parent[10005];
vector<int> ar[10005];
bool ans;
void DFs(int src)
{
    vst[src] = true;
    for (int child : ar[src])
    {
        if (vst[child] == true && parent[src] != child)
        {
            ans = true;
        }

        if (vst[child] == false)
        {
            parent[child] = src;
            DFs(child);
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
            DFs(i);
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