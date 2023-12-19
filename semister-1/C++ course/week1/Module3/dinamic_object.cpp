#include <bits/stdc++.h>
using namespace std;
class student
{

public:
    int roll;
    double gpa;
    student(int roll, double gpa)
    {
        this->roll = roll;
        this->gpa = gpa;
    }
};
student *fun()
{
    student *tanvir = new student(607452, 4.44);
    return tanvir;
}
int main()
{
    // student *tanvir = new student(607452, 4.44);
    student *tanvir = fun();
    cout << tanvir->roll << " " << tanvir->gpa;
    return 0;
}