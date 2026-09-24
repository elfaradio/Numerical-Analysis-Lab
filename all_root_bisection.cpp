

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define E 0.0005
double fn(double x)
{
    return (x * x * x) - (5 * x * x) - 29;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a, b, dx;

    cin >> a >> b >> dx;

    double x1 = a;
    double x2 = x1 + dx;

    while (x2 <= b)
    {
        double f1 = fn(x1);
        double f2 = fn(x2);

        if (f1 == 0)
        {
            cout << fixed << setprecision(3);
            cout << "Root = " << x1 << endl;
        }

        else if (f1 * f2 < 0)
        {
            double root;

            while (true)
            {
                double x0 = (x1 + x2) / 2;
                double f0 = fn(x0);

                if (f1 * f0 < 0)
                {
                    x2 = x0;
                    f2 = f0;
                }
                else
                {
                    x1 = x0;
                    f1 = f0;
                }

                if (abs(x2 - x1) < E)
                {
                    root = (x1 + x2) / 2;
                    break;
                }
            }

            cout << fixed << setprecision(3);
            cout << "Root = " << root << endl;
        }

        x1 = x2;
        x2 = x1 + dx;
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
