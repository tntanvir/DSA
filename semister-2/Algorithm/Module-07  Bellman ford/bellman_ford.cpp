#include <bits/stdc++.h>
using namespace std;
int dis[10005];
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (Edge ed : EdgeList)
    {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            dis[v] = dis[u] + c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << endl;
    }

    return 0;
}