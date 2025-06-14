#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string s, t;
        cin >> s >> t;

        int t_ln = t.size();

        for (int j = 0; j <= 1000; j++)
        {
            if (s.find(t) > 1001)
            {
                break;
            }
            s.replace(s.find(t), t_ln, "#");
        }
        cout << s << endl;
    }

    return 0;
}