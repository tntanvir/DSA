#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    n.push_back(40);
    n.push_back(50);
    n.push_back(60);
    cout << n.capacity() << endl;
    cout << n.size() << endl;
    n.clear();
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << n[2] << endl;

    return 0;
}