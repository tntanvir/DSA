#include <bits/stdc++.h>
using namespace std;
class Student
{

public:
    string name;
    int id;
    char sec;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].id >> a[i].sec >> a[i].marks;
    }
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        // cout << a[i].name << " " << a[i].id << " " << a[i].sec << " " << a[i].marks << endl;
        swap(a[i].sec, a[j].sec);

        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].id << " " << a[i].sec << " " << a[i].marks << endl;
        }

    return 0;
}