
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

    vector<vector<double>> v(n, vector<double>(n + 1));

    for (int i = 0; i < n; i += 1)
    {
        cin >> v[i][0] >> v[i][1];
    }

    for (int j = 2; j <= n; j += 1)
    {
        for (int i = 0; i < n - j + 1; i += 1)
        {
            v[i][j] = v[i + 1][j - 1] - v[i][j - 1];
        }
    }

    double x;
    cin >> x;

    double h = v[1][0] - v[0][0];
    double u = (x - v[n - 1][0]) / h;

    double ans = v[n - 1][1];
    double term = 1;

    for (int i = 1; i < n; i += 1)
    {
        term = term * (u + (i - 1)) / i;
        ans += term * v[n - i - 1][i + 1];
    }

    cout << fixed << setprecision(6) << ans << endl;
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
