

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

double fn(double x)
{
    return x * x * x - 9 * x + 1;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a, b, E;
    cin >> a >> b >> E;
    // corner
    if (fn(a) * fn(b) >= 0)
    {
        cout << "Wrong Interval\n";
        return;
    }
    double x = 0.0;
    while (fabs(b - a) >= E)
    {
        x = (a + b) / 2.0;
        if (fabs(fn(x)) == 0.0)
        {
            break;
        }
        else if ((fn(x) * fn(b)) > 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    }
    x = (a + b) / 2.0;
    cout << "Root: " << fixed << setprecision(3) << x << endl;
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
