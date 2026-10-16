
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

    vector<double> x(n);
    vector<vector<double>> v(n, vector<double>(n));

    for (int i = 0; i < n; i += 1)
    {
        cin >> x[i] >> v[i][0];
    }

    for (int j = 1; j < n; j += 1)
    {
        for (int i = 0; i < n - j; i += 1)
        {
            v[i][j] = (v[i + 1][j - 1] - v[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    cout << "Divided Difference Table:\n";

    for (int i = 0; i < n; i += 1)
    {
        cout << x[i] << " ";

        for (int j = 0; j < n - i; j += 1)
        {
            cout << fixed << setprecision(6)
                 << v[i][j] << " ";
        }

        cout << endl;
    }

    double b;
    cin >> b;

    double ans = v[0][0];
    double tt = 1;

    for (int i = 1; i < n; i += 1)
    {
        tt *= (b - x[i - 1]);
        ans += tt * v[0][i];
    }

    cout << "Value of y: "
         << fixed << setprecision(6) << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;

    while (t--)
    {
        solve();
    }
}
