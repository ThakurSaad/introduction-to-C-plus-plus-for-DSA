#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        int prev_id = 0,
            max_marks = 0;
        string result_name;
        char result_section;

        for (int j = 0; j < 3; j++)
        {
            int id;
            string name;
            char section;
            int marks;

            cin >> id >> name >> section >> marks;

            if (max_marks < marks)
            {
                max_marks = marks;
                prev_id = id;
                result_name = name;
                result_section = section;
            }
            else if (max_marks == marks)
            {
                if (prev_id > id)
                {
                    max_marks = marks;
                    prev_id = id;

                    result_name = name;
                    result_section = section;
                }
            }

            // cout << id << " " << name << " " << section << " " << marks << endl;
        }
        cout << prev_id << " " << result_name << " " << result_section << " " << max_marks << endl;

        // cout << endl;
    }

    return 0;
}