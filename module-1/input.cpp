#include <iostream>
using namespace std;

int main()
{
    int x;
    char a;
    double y;

    cin >> x >> a >> y;

    int a_ascii = a;

    cout
        << x << endl
        << a << endl
        << y << endl
        << a_ascii << endl
        << "type casting char " << a << "-> " << (int)a << endl
        << "type casting int " << a_ascii << "-> " << (char)a_ascii << endl;
}