

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
double f(double x)
{
    return log10(x);
}

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a, b = 5, h, s, ans;
    int n;

    cin >> a;

    cin >> n;

    if (a <= 0 || a >= b || n <= 0)
    {
        cout << "Invalid input";
        return;
    }

    h = (b - a) / n;

    s = f(a) + f(b);

    for (int i = 1; i < n; i += 1)
    {
        s = s + 2 * f(a + i * h);
    }

    ans = (h / 2) * s;

    cout << ans << endl;
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
