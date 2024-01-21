#include <bits/stdc++.h>
using namespace std;
int fun(int *p)
{
    *p = 20;
    // cout << *p << endl;
    return 0;
}
int main()
{
    int vlu = 10;
    int *ptr = &vlu;
    fun(ptr);
    cout << *ptr << " " << vlu << endl;
    return 0;
}