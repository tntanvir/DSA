#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> n;//type-1
    // vector<int> n(5); //type-2
    // vector<int> n(5, 10); // type-3

    // vector<int> N2(5, 100);//type-4
    // vector<int> n(N2);//type-4

    // int a[5] = {100, 39, 32, 11, 98};//type-5
    // vector<int> n(a, a + 5);//type-5

    vector<int> n = {1, 2, 3, 4};

    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }

    cout << endl;
    cout << n.size() << endl;
    return 0;
}