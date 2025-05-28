#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

Student *fun()
{
    Student lisa(34, 5, 2.34);
    Student *p = &lisa;
    return p;
}

int main()
{
    Student *lisa_noonim = fun();

    // cout << (*lisa_noonim).roll << " " << (*lisa_noonim).cls << " " << (*lisa_noonim).gpa << endl;
    cout << lisa_noonim->roll << " " << lisa_noonim->cls << " " << lisa_noonim->gpa << endl;

    return 0;
}