

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define E 0.005
double fn(double x)
{
    return x * x - 3;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a, b;
    cin >> a >> b;
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
        if (fabs(fn(x)) < E)
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
    cout << "Root: " << x << endl;
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
