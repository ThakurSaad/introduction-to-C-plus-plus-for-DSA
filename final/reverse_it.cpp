#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int t;
    cin >> t;
    Student a[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    for (int i = 0, j = t - 1; i < t; i++, j--)
    {
        if (i > j)
        {
            break;
        }
        swap(a[i].s, a[j].s);
    }

    for (int i = 0; i < t; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}