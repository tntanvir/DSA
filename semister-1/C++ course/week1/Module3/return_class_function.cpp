#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    int cls;

    Student(int roll, int cls)
    {
        this->roll = roll;
        this->cls = cls;
    }
};
Student fun()
{
    Student tanvir(607452, 11);
    return tanvir;
}

int main()
{
    Student p = fun();
    cout << p.roll;
    return 0;
}