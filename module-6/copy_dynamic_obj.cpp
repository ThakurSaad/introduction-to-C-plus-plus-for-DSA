#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    };
};

int main()
{
    Cricketer *fuad = new Cricketer("Bangladesh", 40);
    Cricketer *saad = new Cricketer("Japan", 50);

    // saad->country = fuad->country;
    // saad->jersey = fuad->jersey;
    *saad = *fuad;
    delete fuad;

    // cout << fuad->country << fuad->jersey << endl;
    cout << saad->country << saad->jersey << endl;

    return 0;
}