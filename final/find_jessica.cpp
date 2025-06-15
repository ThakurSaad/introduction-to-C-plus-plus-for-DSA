#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string c;

    while (ss >> c)
    {
        if (c == "Jessica")
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}