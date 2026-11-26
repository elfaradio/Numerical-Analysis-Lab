

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

    vector<vector<double>> a(n, vector<double>(n + 1));

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= n; j += 1)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i += 1)
    {
        double pv = a[i][i];

        if (fabs(pv) < 1e-9)
        {
            cout << "Zero pivot found\n";
            return;
        }

        for (int j = 0; j <= n; j += 1)
        {
            a[i][j] = a[i][j] / pv;
        }

        for (int k = 0; k < n; k += 1)
        {
            if (k != i)
            {
                double m = a[k][i];

                for (int j = 0; j <= n; j += 1)
                {
                    a[k][j] = a[k][j] - m * a[i][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i += 1)
    {
        cout << "x" << i + 1 << " = " << a[i][n] << '\n';
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
