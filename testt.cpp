

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
    vector<double> x(n), y(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> x[i] >> y[i];
    }
    double yy;
    cin >> yy;
    double ans = 0;
    for (int i = 0; i < n; i += 1)
    {
        double tt = y[i];
        for (int j = 0; j < n; j += 1)
        {
            if (i != j)
            {
                tt *= (yy - x[j]) / (x[i] - x[j]);
            }
        }
        ans += tt;
    }
    cout << ans << endl;
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
