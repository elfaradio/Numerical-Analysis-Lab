
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
    double u = (x - v[0][0]) / h;

    double tt = 1;
    double dtt = 0;
    double ddtt = 0;

    double f = 0;
    double s = 0;

    for (int i = 1; i < n; i += 1)
    {
        double nt = tt;
        double nd = dtt;
        double ndd = ddtt;

        tt = nt * (u - (i - 1)) / i;

        dtt = (nd * (u - (i - 1)) + nt) / i;

        ddtt = (ndd * (u - (i - 1)) + 2 * nd) / i;

        f += dtt * v[0][i + 1];
        s += ddtt * v[0][i + 1];
    }

    f /= h;
    s /= (h * h);

    cout << fixed << setprecision(6);

    cout << "dy/dx= " << f << endl;
    cout << "d2x/d2y= " << s << endl;
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
