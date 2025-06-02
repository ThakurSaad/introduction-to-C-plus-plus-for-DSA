#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    // cin >> s;
    getline(cin, s);
    int s_size = s.size();

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}