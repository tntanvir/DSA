#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int m;
    cin >> n >> m;
    long long int mul = n * m;
    cout << n << " "
         << "+"
         << " " << m << " "
         << "="
         << " " << n + m << endl;
    cout << n << " "
         << "*"
         << " " << m << " "
         << "="
         << " " << mul << endl;
    cout << n << " "
         << "-"
         << " " << m << " "
         << "="
         << " " << n - m << endl;
    return 0;
}