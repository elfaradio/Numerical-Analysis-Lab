

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define E 1e-7 // E 1e-7 dhorle uva te accepted
double p, q, r, s, tt, u;
double fn(double x)
{
    return (p * exp(-x)) + (q * sin(x)) + (r * cos(x)) + (s * tan(x)) + (tt * x * x) + u;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    while (cin >> p >> q >> r >> s >> tt >> u)
    {
        double a = 0.0, b = 1.0;
        if (fn(a) * fn(b) > 0)
        {
            cout << "No solution\n";
        }
        else
        {
            double x = 0.0;
            while (fabs(b - a) >= E)
            {
                x = (a + b) / 2.0;

                if ((fn(x) * fn(b)) > 0)
                {
                    b = x;
                }
                else
                {
                    a = x;
                }
            }
            x = (a + b) / 2.0;
            cout << fixed << setprecision(4) << x << endl;
        }
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
