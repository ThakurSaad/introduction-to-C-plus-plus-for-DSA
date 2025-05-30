#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int s_ln = strlen(s);

        sort(s, s + s_ln);

        for (int i = 0; i < s_ln; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}