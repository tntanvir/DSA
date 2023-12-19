#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    long int p;
    long long int sum = 0;
    cin >> n >> p;
    for (int i = 2; i <= p; i += 2)
    {
        sum += pow(n, i);
    }
    cout << sum << endl;

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long a, b;
//     cin >> a >> b;
//     long long sum = 0;
//     for (int i = 2; i <= b; i += 2)
//     {
//         sum += pow(a, i);
//     }
//     cout << sum << endl;
// }