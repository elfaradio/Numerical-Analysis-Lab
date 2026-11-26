

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
    vector<double> x(n), x0(n);

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= n; j += 1)
        {
            cin >> a[i][j];
        }

        if (a[i][i] == 0)
        {
            cout << "Zero diagonal element\n";
            return;
        }

        x0[i] = a[i][n] / a[i][i];
    }

    double er = 1e-6;
    int nn = 1, it = 0;

    while (nn == 1 && it < 1000)
    {
        nn = 0;

        for (int i = 0; i < n; i += 1)
        {
            double ss = a[i][n];

            for (int j = 0; j < n; j += 1)
            {
                if (i != j)
                {
                    ss -= a[i][j] * x0[j];
                }
            }

            x[i] = ss / a[i][i];

            if (!isfinite(x[i]))
            {
                cout << "Did not converge\n";
                return;
            }

            if (fabs(x[i] - x0[i]) >
                er * max(fabs(x[i]), 1e-12))
            {
                nn = 1;
            }
        }

        x0 = x;
        it += 1;
    }

    if (nn == 1)
    {
        cout << "Did not converge\n";
        return;
    }

    cout << fixed << setprecision(6);

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
