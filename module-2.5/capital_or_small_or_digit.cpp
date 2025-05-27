#include <bits/stdc++.h>
using namespace std;

int main()
{

    char x;
    cin >> x;

    int ascii_x = int(x);

    if (ascii_x >= 48 && ascii_x <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (
        (ascii_x >= 65 && ascii_x <= 90) ||
        (ascii_x >= 97 && ascii_x <= 122))
    {
        cout << "ALPHA" << endl;

        if (ascii_x >= 65 && ascii_x <= 90)
        {
            cout << "IS CAPITAL";
        }
        else if (ascii_x >= 97 && ascii_x <= 122)
        {
            cout << "IS SMALL";
        }
    }

    return 0;
}