#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        myList.push_back(n);
    }

    myList.sort();

    myList.unique();

    for (int x : myList)
    {
        cout << x << " ";
    }

    return 0;
}