#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define E 0.0005

double fn(vector<double> &px, double x)
{
    ll n = px.size();
    double ans = 0;

    for (int i = 0; i < n; i += 1)
    {
        ans += px[i] * pow(x, n - i - 1);
    }

    return ans;
}

double der(vector<double> &px, double x)
{
    ll n = px.size();
    double ans = 0;

    for (int i = 0; i < n - 1; i += 1)
    {
        ans += px[i] * (n - i - 1) * pow(x, n - i - 2);
    }

    return ans;
}

double newton(vector<double> &px, double x0)
{
    while (true)
    {
        double f = fn(px, x0);
        double d = der(px, x0);

        double xr = x0 - (f / d);

        if (fabs(xr - x0) < E)
            return xr;

        x0 = xr;
    }
}

void solve()
{
    // By Farhadul Islam
    // Newton-Raphson + Deflation

    ll n;
    cin >> n;

    vector<double> px(n + 1);

    for (int i = 0; i <= n; i += 1)
    {
        cin >> px[i];
    }

    double x0;
    cin >> x0;

    cout << fixed << setprecision(3);

    while (n > 1)
    {

        double xr = newton(px, x0);

        cout << xr << endl;

        vector<double> qx;

        qx.push_back(px[0]);

        for (int i = 1; i < px.size() - 1; i += 1)
        {
            qx.push_back(px[i] + qx.back() * xr);
        }

        px = qx;

        n--;

        x0 = xr;
    }

    double r = -px[1] / px[0];

    cout << r << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}