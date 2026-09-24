

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define E 0.005
double f(double x)
{
    return (x * x) - (3 * x) + 2;
}

double der(double x)
{
    return (2 * x) - 3;
}

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double x0, x1;

    cin >> x0;

    while (1)
    {
        if (abs(der(x0)) < 1e-12)
        {
            cout << "Invalid";
            return;
        }
        //

        x1 = x0 - f(x0) / der(x0);
        cout << x1 << endl;
        // cout << abs(x0 - x1) << endl;

        if (abs(x1 - x0) < E)
            break;

        x0 = x1;
    }

    cout << fixed << setprecision(3);
    cout << "Root = " << x1 << '\n';
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
