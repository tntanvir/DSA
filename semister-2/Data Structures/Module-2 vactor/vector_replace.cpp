#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n = {2, 3, 4, 2, 3, 4, 1, 2, 2, 2, 2, 3, 4, 4};
    replace(n.begin(), n.end(), 2, 1000);
    for (int x : n)
    {
        cout << x << " ";
    }
    return 0;
}