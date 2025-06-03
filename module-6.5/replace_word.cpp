#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < 1000; i++)
    {
        if (s.find("EGYPT") > 1000)
        {
            break;
        }
        s.replace(s.find("EGYPT"), 5, " ");
    }

    cout << s << endl;

    return 0;
}