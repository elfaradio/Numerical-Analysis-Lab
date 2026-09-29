#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string
ll pwr(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai

    ll x;

    while (cin >> x)
    {
        cin.ignore();
        string s;
        getline(cin, s);

        stringstream ss(s);

        vector<ll> a;
        ll d;

        while (ss >> d)
        {
            a.push_back(d);
        }

        ll ans = 0;
        ll n = a.size();

        for (int i = 0; i < n - 1; i += 1)
        {
            ans += a[i] * (n - i - 1) * pwr(x, n - i - 2);
        }

        cout << ans << endl;
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