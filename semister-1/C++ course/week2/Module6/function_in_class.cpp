#include <bits/stdc++.h>
using namespace std;
class Person
{

public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void person()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person a("Tanvir", 18);
    a.person();
    return 0;
}