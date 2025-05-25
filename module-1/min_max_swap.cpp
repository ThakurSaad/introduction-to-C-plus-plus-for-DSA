#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    cout << min({4, 6, 4, 3, 5, 5, 5}) << endl;
    cout << max({4, 6, 4, 3, 5, 5, 5}) << endl;

    int x = 6,
        y = 90;

    swap(x, y);

    cout << x << y;

    return 0;
}