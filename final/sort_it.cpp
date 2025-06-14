#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    int sum_l = l.eng_marks + l.math_marks;
    int sum_r = r.eng_marks + r.math_marks;

    if (sum_l > sum_r)
    {
        return true;
    }
    else if (sum_l == sum_r)
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}