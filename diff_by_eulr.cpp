#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

double f(double x, double y)
{
    return x * x * x + y;
}

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai

    double x, y, h, nn;
    cin >> x >> y >> h >> nn;

    cout << fixed << setprecision(9);

    for (int i = 0; i < round(nn / h); i += 1)
    {
        y = y + h * f(x, y);
        x = x + h;
    }
    cout << y << endl;
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