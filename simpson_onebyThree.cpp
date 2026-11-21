

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n;
    double l;
    cin >> n >> l;
    vector<double> x(n + 1);
    vector<double> d(n + 1);
    for (int i = 0; i < n; i += 1)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i += 1)
    {
        cin >> d[i];
    }
    double h = double(l - x[0]) / (n - 1);
    // cout << h << endl;
    double od = 0.0, ev = 0.0;
    for (int i = 1; i < n - 1; i += 1)
    {
        if (i & 1)
        {
            od += d[i];
        }
        else
        {
            ev += d[i];
        }
    }
    double s = d[0] + (4 * od + 2 * ev) + d[n - 1];
    cout << fixed << setprecision(3) << (h / 3) * s << endl;
}
int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //   cin >> t;
    while (t--)
    {
        solve();
    }
}
