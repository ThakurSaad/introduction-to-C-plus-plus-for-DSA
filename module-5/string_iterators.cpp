#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    cout << *s.begin() << endl;
    // cout << *(s.end() - 11) << endl;
    // cout << *(s.end() - 1) << endl;

    // for (string::iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}