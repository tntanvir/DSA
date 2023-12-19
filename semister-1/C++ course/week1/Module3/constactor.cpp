#include <bits/stdc++.h>
using namespace std;
class student
{

public:
    int roll;
    double gpa;
    string ar;
    student(int roll, double gpa, string ar)
    {
        this->roll = roll;
        this->gpa = gpa;
        this->ar = ar;
    }
};

int main()
{
    char ar[100];
    cin >> ar;
    student tanvir(607452, 3.04, ar);
    cout << tanvir.roll << " " << tanvir.gpa << tanvir.ar;
    return 0;
}