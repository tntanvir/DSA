// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int *arry(int n)
{

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *p = arry(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }

    return 0;
}