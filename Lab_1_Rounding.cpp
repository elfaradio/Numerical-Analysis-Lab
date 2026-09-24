

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
double fn(double x, int n)
{
    if (x == 0)
        return 0;

    int p = floor(log10(abs(x)));

    int d = n - 1 - p;

    double fac = pow(10, d);
    double y = x * fac;

    long long a = (long long)y;
    double b = y - a;

    int nd = (int)(b * 10);

    if (nd < 5)
    {
    }
    else if (nd > 5)
    {
        a++;
    }
    else
    {

        if (a % 2 != 0)
            a++;
    }

    return a / fac;
}

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double x, n;
    cin >> x >> n;
    double ans = fn(x, n);
    cout << ans << endl;
}
int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        solve();
    }
}
