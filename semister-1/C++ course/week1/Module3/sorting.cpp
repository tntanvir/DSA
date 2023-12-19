#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    int ar[n] = {30, 70, 50, 10, 40};

    sort(ar, ar + n);                 // small->big
    sort(ar, ar + n, greater<int>()); // big->small
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}