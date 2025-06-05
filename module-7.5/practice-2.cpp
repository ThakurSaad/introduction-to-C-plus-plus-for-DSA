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

    // reverse using two pointers
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (i > j)
        {
            break;
        }

        Student temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << " " << endl;
    }
    return 0;
}