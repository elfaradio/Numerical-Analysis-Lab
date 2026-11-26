

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    int n;
    cin >> n;

    double a[n][n + 1];
    double x[n], x0[n];

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= n; j += 1)
        {
            cin >> a[i][j];
        }

        x0[i] = 0;
    }

    for (int k = 0; k < 100; k += 1)
    {
        for (int i = 0; i < n; i += 1)
        {
            double sum = a[i][n];

            for (int j = 0; j < n; j += 1)
            {
                if (i != j)
                {
                    sum -= a[i][j] * x0[j];
                }
            }

            x[i] = sum / a[i][i];
        }

        for (int i = 0; i < n; i += 1)
        {
            x0[i] = x[i];
        }
    }

    cout << fixed << setprecision(6);

    for (int i = 0; i < n; i += 1)
    {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }
}
int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
