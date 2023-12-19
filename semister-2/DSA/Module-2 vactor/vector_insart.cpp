#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n = {1, 2, 3, 4, 5};
    vector<int> y = {100, 200, 300, 400, 500};

    n.insert(n.begin() + 2, y.begin(), y.end());
    for (int x : n)
    {
        cout << x << " ";
    }
    return 0;
}