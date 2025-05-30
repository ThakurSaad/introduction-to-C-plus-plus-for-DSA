#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int highest_marks = 0,
            smallest_id_highest_marks,
            prev_id = 1;

        for (int i = 0; i < 3; i++)
        {
            int id;
            string name;
            char section;
            int marks;

            cin >> id >> name >> section >> marks;

            if (marks == highest_marks)
            {
                smallest_id_highest_marks = id;
                // if (id < smallest_id_highest_marks)
                // {
                //     smallest_id_highest_marks = id;
                // }
            }

            if (marks > highest_marks)
            {
                highest_marks = marks;
            }

            // cout << id << " " << name << " " << section << " " << marks << endl;
        }
        cout << smallest_id_highest_marks << " " << highest_marks << endl;
    }

    return 0;
}