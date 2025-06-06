#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << -1;
            break;
        }

        int a[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int num_of_odd = 0,
            num_of_even = 0;

        for (int j = 0; j < n; j++)
        {
            a[j] % 2 == 0 ? num_of_even++ : num_of_odd++;
        }

        if (num_of_even == num_of_odd)
        {
            cout << 0 << endl;
            continue;
        }

        int num_of_operations = 0;

        if (num_of_odd < num_of_even)
        {
            // increasing odd decreasing even
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 != 0)
                {
                    if (num_of_even == num_of_odd)
                    {
                        cout << num_of_operations << endl;
                        break;
                    }

                    num_of_odd++;
                    num_of_even--;
                    num_of_operations++;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 != 0)
                {
                    if (num_of_even == num_of_odd)
                    {
                        cout << num_of_operations << endl;
                        break;
                    }

                    num_of_odd--;
                    num_of_even++;
                    num_of_operations++;
                }
            }
        }
    }

    return 0;
}