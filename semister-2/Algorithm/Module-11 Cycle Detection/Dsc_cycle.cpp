#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
void dsu_inisialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int n)
{
    if (par[n] == -1)
        return n;

    return par[n] = dsu_find(par[n]);
}

void dsu_UNION(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_inisialization(n);
    bool flg = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        if (dsu_find(a) == dsu_find(b))
        {
            flg = true;
        }
        else
        {
            dsu_UNION(a, b);
        }
    }
    if (flg)
    {
        cout << "Cycle find" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }

    return 0;
}