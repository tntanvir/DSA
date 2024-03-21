#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int a, b;
int ar, ac, br, bc;
bool vis[1005][1005];
bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < a && cj >= 0 && cj < b)
        return true;
    else
        return false;
}
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool flg = false;
vector<char> v;

void DFs(int si, int sj)
{
    vis[si][sj] = true;
    // cout << ar << " " << ac << endl;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
        {
            if (flg == false)
            {
                // cout << ci << " " << cj << endl;
                if (ac + 1 == cj)
                {
                    ac += 1;
                    // cout << "R";
                    v.push_back('R');
                }
                else if (ac - 1 == cj)
                {
                    ac -= 1;

                    // cout << "L";
                    v.push_back('L');
                }
                else if (ar - 1 == ci)
                {
                    ar -= 1;

                    // cout << "U";
                    v.push_back('U');
                }
                else if (ar + 1 == ci)
                {
                    ar += 1;

                    // cout << "D";
                    v.push_back('D');
                }
            }
            if (grid[ci][cj] == 'B')
            {
                flg = true;
            }
            if (grid[ci][cj] == '.')
            {
                DFs(ci, cj);
            }
        }
    }
}

void BFs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> s = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = s.first + d[i].first;
            int cj = s.second + d[i].second;
            cout << ci << " " << cj << endl;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                // if (flg == false)
                // {
                //     // cout << ci << " " << cj << endl;
                //     if (ac + 1 == cj)
                //     {
                //         ac += 1;
                //         // cout << "R";
                //         v.push_back('R');
                //     }
                //     else if (ac - 1 == cj)
                //     {
                //         ac -= 1;

                //         // cout << "L";
                //         v.push_back('L');
                //     }
                //     else if (ar - 1 == ci)
                //     {
                //         ar -= 1;

                //         // cout << "U";
                //         v.push_back('U');
                //     }
                //     else if (ar + 1 == ci)
                //     {
                //         ar += 1;

                //         // cout << "D";
                //         v.push_back('D');
                //     }
                // }
                // if (grid[ci][cj] == 'B')
                // {
                //     flg = true;
                // }
                // if (grid[ci][cj] == '.')
                // {
                //     // DFs(ci, cj);
                //     q.push({ci, cj});
                // }
                cout << ci << " " << cj << endl;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                ar = i;
                ac = j;
            }
            if (grid[i][j] == 'B')
            {
                br = i;
                bc = j;
            }
        }
    }
    // cout << ar << ac << endl;
    // cout << br << bc << endl;
    memset(vis, false, sizeof(vis));
    BFs(ar, ac);
    // DFs(ar, ac);

    if (flg)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    cout << v.size() << endl;
    for (char x : v)
    {
        cout << x;
    }
    cout << endl;
    return 0;
}