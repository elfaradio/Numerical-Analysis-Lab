

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n;
    cin >> n;
    double a[n][n + 1];

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= n; j += 1)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i += 1)
    {

        int pv = i;

        for (int k = i + 1; k < n; k += 1)
        {
            if (fabs(a[k][i]) > fabs(a[pv][i]))
            {
                pv = k;
            }
        }

        if (fabs(a[pv][i]) < 1e-9)
        {
            cout << "No ans\n";
            return;
        }

        if (pv != i)
        {
            for (int j = 0; j <= n; j += 1)
            {
                swap(a[i][j], a[pv][j]);
            }
        }
        for (int k = i + 1; k < n; k += 1)
        {
            double m = a[k][i] / a[i][i];

            for (int j = i; j <= n; j += 1)
            {
                a[k][j] = a[k][j] - m * a[i][j];
            }
        }
    }

    double x[n];

    for (int i = n - 1; i >= 0; i -= 1)
    {
        x[i] = a[i][n];

        for (int j = i + 1; j < n; j += 1)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }

        x[i] = x[i] / a[i][i];
    }

    for (int i = 0; i < n; i += 1)
    {
        cout << "x" << i + 1 << " = " << x[i] << '\n';
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
