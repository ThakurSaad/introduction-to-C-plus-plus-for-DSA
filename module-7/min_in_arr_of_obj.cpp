#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student min_obj;
    min_obj.marks = INT_MAX;
    // min_obj.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min_obj.marks)
        // if (a[i].marks > min_obj.marks)
        {
            min_obj.name = a[i].name;
            min_obj.roll = a[i].roll;
            min_obj.marks = a[i].marks;
        }
    }

    cout << min_obj.name << " " << min_obj.roll << " " << min_obj.marks << " " << endl;

    return 0;
}