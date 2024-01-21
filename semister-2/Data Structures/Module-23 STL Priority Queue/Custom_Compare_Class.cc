#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    int marks;

    Student(string name, int id, int marks)
    {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks != b.marks)
        {

            return a.marks > b.marks;
        }
        return a.id < b.id;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int id;
        int marks;
        cin >> name >> id >> marks;
        Student obj(name, id, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}