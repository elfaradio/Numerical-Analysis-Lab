#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai

    ll n;
    cin >> n;

    vector<vector<ll>> v(n, vector<ll>(n + 1));

    for (int i = 0; i < n; i += 1)
    {
        ll x, y;
        cin >> x >> y;

        v[i][0] = x;
        v[i][1] = y;
    }

    for (int j = 2; j <= n; j += 1)
    {
        for (int i = 0; i < n - j + 1; i += 1)
        {
            v[i][j] = v[i + 1][j - 1] - v[i][j - 1];
        }
    }

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j <= n - i; j += 1)
        {
            cout << v[i][j] << " ";
        }

        cout << endl;
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