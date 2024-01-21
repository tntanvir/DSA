#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n = {1, 2, 3, 4, 5};
    // n.erase(n.begin() + 2);
    n.erase(n.begin() + 2, n.begin() + 4);
    for (int x : n)
    {
        cout << x << " ";
    }
    return 0;
}