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
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student lisa(45, 5, 2.34);
    Student jenny(50, 5, 2.55);

    cout << lisa.roll << " " << lisa.cls << " " << lisa.gpa << endl;
    cout << jenny.roll << " " << jenny.cls << " " << jenny.gpa << endl;

    return 0;
}