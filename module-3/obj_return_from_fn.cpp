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

Student fun()
{
    Student lisa(45, 5, 2.34);
    return lisa;
}

int main()
{
    Student lisa_noonim = fun();

    cout << lisa_noonim.roll << " " << lisa_noonim.cls << " " << lisa_noonim.gpa << endl;

    return 0;
}