#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int n;
    cin >> n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            myList.push_front(val);
            // cout << "L -> ";
            // for (int x : myList)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            // myList.reverse();
            // cout << "R -> ";
            // for (int x : myList)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            // myList.reverse();
        }
        else if (pos == 1)
        {

            myList.push_back(val);
            // cout << "L -> ";
            // for (int x : myList)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            // myList.reverse();
            // cout << "R -> ";
            // for (int x : myList)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            // myList.reverse();
        }
        else
        {
            if (val < myList.size())
            {
                myList.erase(next(myList.begin(), val));
            }
        }
        cout << "L -> ";
        for (int x : myList)
        {
            cout << x << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (int x : myList)
        {
            cout << x << " ";
        }
        cout << endl;
        myList.reverse();
    }

    return 0;
}