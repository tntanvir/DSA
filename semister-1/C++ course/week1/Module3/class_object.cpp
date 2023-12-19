#include <bits/stdc++.h>
using namespace std;
class Student
{

public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;
    // a.roll = 607452;
    // a.cgpa = 3.90;
    // char tam[100] = "Tanvir";
    // strcpy(a.name, tam);
    cin >> a.name >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa;
    return 0;
}