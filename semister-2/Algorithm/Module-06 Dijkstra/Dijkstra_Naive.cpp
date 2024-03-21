#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> ar[100];
int dis[100];
void dijkStra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        for (pair<int, int> child : ar[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
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
        int a, b, c;
        cin >> a >> b >> c;
        ar[a].push_back({b, c});
        ar[b].push_back({a, c});
    }
    for (int i = 0; i < 100; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkStra(0);
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << endl;
    }

    return 0;
}