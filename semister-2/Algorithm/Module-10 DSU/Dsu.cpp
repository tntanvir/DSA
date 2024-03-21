#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int dsu_u_size[N];
void Dsu_insialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        dsu_u_size[i] = 1;
    }
};

int find_DSU(int n)
{
    if (par[n] == -1)
        return n;

    return par[n] = find_DSU(par[n]);
}
void Dsu_Union(int node1, int node2)
{
    int leaderA = find_DSU(node1);
    int leaderB = find_DSU(node2);
    par[leaderA] = leaderB;
}
void Dsu_Union_size(int node1, int node2)
{
    int leaderA = find_DSU(node1);
    int leaderB = find_DSU(node2);
    if (dsu_u_size[leaderA] > dsu_u_size[leaderB])
    {
        par[leaderB] = leaderA;
        dsu_u_size[leaderA] += dsu_u_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        dsu_u_size[leaderB] += dsu_u_size[leaderA];
    }
}

int main()
{
    Dsu_insialization(8);
    // Dsu_Union(1, 5);
    // cout << find_DSU(1) << endl;

    Dsu_Union_size(1, 2);
    Dsu_Union_size(1, 3);
    Dsu_Union_size(5, 3);

    Dsu_Union_size(5, 6);
    Dsu_Union_size(6, 7);
    cout << find_DSU(1) << endl;
    cout << find_DSU(5) << endl;

    return 0;
}