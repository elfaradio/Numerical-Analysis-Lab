

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
        cin >> x[i];
    }

    for (int i = 0; i < n; i += 1)
    {
        cin >> y[i];
    }

    double sx = 0, sy = 0, sx2 = 0, sxy = 0;

    for (int i = 0; i < n; i += 1)
    {
        sx += x[i];
        sy += y[i];
        sx2 += x[i] * x[i];
        sxy += x[i] * y[i];
    }

    double a = (sy * sx2 - sx * sxy) / (n * sx2 - sx * sx);

    double b = (n * sxy - sx * sy) / (n * sx2 - sx * sx);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "y = " << a << " + " << b << "x" << endl;
}
int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //  cin >> t;
    while (t--)
    {
        solve();
    }
}
