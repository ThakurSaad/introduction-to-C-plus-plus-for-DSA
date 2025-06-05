#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;

    stringstream ss(s);
    int count = 0;

    while (ss >> s)
    {
        s == x ? count++ : count;
    }
    cout << count << endl;

    return 0;
}