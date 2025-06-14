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

        // int ln_c = c.size();

        // for (int i = 0; i < ln_c; i++)
        // {
        //     int c_ascii = c[i];

        //     if (c_ascii < 97 && c_ascii > 122)
        //     {
        //         break;
        //     }

        //     cout << c[i] << " = " << c_ascii << "| ";
        // }

        // cout << endl;
    }
    cout << "NO";

    return 0;
}