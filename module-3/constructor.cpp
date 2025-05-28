#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student lisa(45, 5, 2.34);

    // lisa.roll = 45;
    // lisa.cls = 5;
    // lisa.gpa = 2.34;

    Student jenny(50, 5, 2.55);

    // jenny.roll = 50;
    // jenny.cls = 5;
    // jenny.gpa = 2.55;

    cout << lisa.roll << " " << lisa.cls << " " << lisa.gpa << endl;
    cout << jenny.roll << " " << jenny.cls << " " << jenny.gpa << endl;

    return 0;
}