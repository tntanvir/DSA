#include <bits/stdc++.h>
using namespace std;
vector<int> ar[10005];
bool vst[10005];
int level[10005];
void bFs(int lv)
{
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
    memset(vst, false, sizeof(vst));
    memset(level, -1, sizeof(level));
    int lv;
    cin >> lv;
    bFs(lv);
    return 0;
}