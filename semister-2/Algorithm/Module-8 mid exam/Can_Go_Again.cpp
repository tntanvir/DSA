#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const long long int N = 1e18;
long long int dis[10005];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        long long int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = N;
    }
    int m;
    cin >> m;
    dis[m] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            long long int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < N && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < N && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }

    int lop;
    cin >> lop;
    while (lop--)
    {
        int o;
        cin >> o;
        if (cycle == false)
        {
            if (dis[o] < N)
                cout << dis[o] << endl;
            else
                cout << "Not Possible" << endl;
        }
    }

    return 0;
}