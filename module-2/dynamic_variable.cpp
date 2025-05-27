#include <bits/stdc++.h>
using namespace std;

int *p;

int fun()
{
    int x = 10;
    p = &x;
    cout << p << " fun = " << *p << endl;
    return 0;
}

int main()
{

    fun();

    cout << p << " main = " << *p << endl;

    int *p = new int;
    *p = 100;
    cout << p << " = " << *p;

    return 0;
}