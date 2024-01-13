#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;
    v.push_back(x);
    int cur_indx = v.size() - 1;
    // cout << cur_indx << endl;
    while (cur_indx != 0)
    {
        int parent = (cur_indx - 1) / 2;
        // cout << parent;
        if (v[parent] < v[cur_indx])
        {
            swap(v[parent], v[cur_indx]);
        }
        else
        {
            break;
        }
        cur_indx = parent;
    }
    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}