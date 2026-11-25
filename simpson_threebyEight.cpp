

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n;
    double a, l = 1.0;

    cin >> a;

    cin >> n;

    if (n <= 0 || n % 3 != 0 || a >= l)
    {
        cout << "Invalid input" << endl;
        return;
    }

    double h = (l - a) / n;

    vector<double> x(n + 1);
    vector<double> d(n + 1);

    for (int i = 0; i <= n; i += 1)
    {
        x[i] = a + i * h;
        d[i] = x[i] / (1 + x[i] * x[i]);
    }

    double s1 = 0.0, s2 = 0.0;

    for (int i = 1; i < n; i += 1)
    {
        if (i % 3 == 0)
        {
            s1 += d[i];
        }
        else
        {
            s2 += d[i];
        }
    }

    double s = d[0] + 2 * s1 + 3 * s2 + d[n];

    cout << fixed << setprecision(3)
         << (3 * h / 8) * s << endl;
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
