#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n = {10, 20, 30};
    vector<int> x = {1, 2, 3};
    x.pop_back();
    n = x;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}