#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
vector<pair<long long int, long long int>> v[N];
int dis[N];
class cmp
{
public:
    bool operator()(pair<int, long long int> a, pair<long long int, long long int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(long long int src)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int node = parent.first;
        long long int cost = parent.second;
        for (pair<long long int, long long int> child : v[node])
        {
            long long int childNode = child.first;
            long long int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    long long int n, e;
    cin >> n >> e;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (long long int i = 0; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    long long int src;
    cin >> src;
    dijkstra(src);
    long long int lop;
    cin >> lop;
    for (long long int i = 0; i < lop; i++)
    {
        long long int a, b;
        cin >> a >> b;
        // cout << dis[a] << " " << b << endl;
        if (dis[a] <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}