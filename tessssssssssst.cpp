
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai

    ll n;
    cin >> n;

    vector<vector<double>> v(n, vector<double>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }

    for (int j = 2; j <= n; j++)
    {
        for (int i = 0; i < n - j + 1; i++)
        {
            v[i][j] = (v[i + 1][j - 1] - v[i][j - 1]) / (v[i + j - 1][0] - v[i][0]);
        }
    }

    cout << "Divided Difference Table:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << fixed << setprecision(4)
                 << setw(12) << v[i][j];
        }
        cout << endl;
    }

    double p;
    cin >> p;

    double ans = v[0][1];
    double term = 1.0;

    for (int i = 2; i <= n; i++)
    {
        term *= (p - v[i - 2][0]);
        ans += term * v[0][i];
    }

    cout << "The value of y is: "
         << fixed << setprecision(6) << ans << endl;
}

int main()
{
    solve();
    return 0;
}
