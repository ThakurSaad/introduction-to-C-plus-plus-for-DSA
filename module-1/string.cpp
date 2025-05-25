#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << x << endl;

    // string s;
    // cin >> s;
    // cout << s;

    cin.ignore();

    char s[100];
    cin.getline(s, 100);
    cout << s << endl;

    string h;
    cin >> h;
    cout << h;

    return 0;
}