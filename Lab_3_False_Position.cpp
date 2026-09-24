

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define E 0.0005
double fn(double x)
{
    return (x * x * x) - (7 * x) + 4;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a, b;
    cin >> a >> b;
    if (fn(a) * fn(b) > 0)
    {
        cout << "Invalid" << endl;
        return;
    }
    double px = 0.0, prx = 0.0;

    while (1)
    {

        px = a - ((fn(a) * (b - a)) / (fn(b) - fn(a)));
        // cout << px << endl;
        if (fabs(px - prx) < E)
        {
            break;
        }
        if (fn(px) * fn(a) < 0)
        {
            b = px;
        }
        else
        {
            a = px;
        }

        prx = px;
    }
    cout << fixed << setprecision(3) << "Root: " << px << endl;
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
