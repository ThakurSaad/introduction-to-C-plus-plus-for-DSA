#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    string subject;

    Student(string name, int roll, int math, int english, string subject)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
        this->subject = subject;
    }

    void hello()
    {
        cout << "hello from 🙌 " << name << " you got " << math << " on " << subject << endl;
        cout << "hello from 🙌 " << name << " you got " << english << " on " << subject << endl;
    }

    void total_marks()
    {
        cout << "total marks = " << math + english << endl;
    }
};

int main()
{
    Student lisa("La Lisa", 55, 80, 90, "math");
    // lisa.hello();
    lisa.total_marks();

    Student jenny("La Jenny Ruby", 55, 80, 60, "math");
    // jenny.hello();
    jenny.total_marks();

    return 0;
}