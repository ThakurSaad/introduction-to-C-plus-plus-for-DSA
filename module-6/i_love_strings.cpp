#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;

        int n = min(s.size(), t.size());

        for (int j = 0; j < n; j++)
        {
            cout << s[j] << t[j];
        }

        if (s.size() > t.size())
        {
            for (int j = n; j < s.size(); j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for (int j = n; j < t.size(); j++)
            {
                cout << t[j];
            }
        }

        cout << endl;
    }

    return 0;
}