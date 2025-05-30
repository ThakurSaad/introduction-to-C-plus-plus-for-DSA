#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, s;
        cin >> n >> s;

        int a[n];

        for (int m = 0; m < n; m++)
        {
            cin >> a[m];
        }

        int is_sum = 0;

        for (int j = 0; j < n - 2; j++)
        {

            if ((n == 1) || (n == 2))
            {
                is_sum = 0;
                break;
            }

            for (int k = j + 1; k < n - 1; k++)
            {

                for (int l = k + 1; l < n; l++)
                {
                    int sum = a[j] + a[k] + a[l];
                    if (sum == s)
                    {
                        is_sum = 1;
                        break;
                    }
                }
            }
        }

        if (is_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}