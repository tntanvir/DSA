#include <bits/stdc++.h>
using namespace std;
class student
{

public:
    int id;
    string name;
    char sec;
    int roll;
    student(int id, string name, char sec, int roll)
    {
        this->id = id;
        this->name = name;
        this->sec = sec;
        this->roll = roll;
    }
};

int main()
{
    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        int id;
        char name[100];
        char sec;
        int roll;
        //-----------------------------------
        int max = INT_MIN;
        int id2;
        char sec2;
        char name2[100];
        for (int i = 0; i < 3; i++)
        {
            cin >> id;
            getchar();
            cin >> name;
            getchar();
            cin >> sec >> roll;
            student a(id, name, sec, roll);

            if (a.roll > max)
            {
                max = a.roll;
                id2 = a.id;
                sec2 = a.sec;
                strcpy(name2, name);
            }
        }
        cout << id2 << " " << name2 << " " << sec2 << " " << max << " " << endl;
    }

    return 0;
}