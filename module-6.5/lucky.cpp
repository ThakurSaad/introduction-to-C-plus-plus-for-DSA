#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int s_size = s.size();

        int digit_1 = s[0] - 48,
            digit_2 = s[1] - 48,
            digit_3 = s[2] - 48,
            digit_n1 = s[s_size - 1] - 48,
            digit_n2 = s[s_size - 2] - 48,
            digit_n3 = s[s_size - 3] - 48;

        if (digit_1 + digit_2 + digit_3 == digit_n1 + digit_n2 + digit_n3)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    };

    return 0;
}