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
    Student *jenny = new Student(42, 5, 2.33);
    return jenny;
}

int main()
{
    Student lisa_noonim(2, 3, 4);
    Student *jenny = fun();

    cout << lisa_noonim.roll << " " << lisa_noonim.cls << " " << lisa_noonim.gpa << endl;
    cout << (*jenny).roll << " " << (*jenny).cls << " " << (*jenny).gpa << endl;

    return 0;
}