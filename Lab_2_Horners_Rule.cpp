

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll n, x;
    cin >> n >> x;
    vector<ll> cp(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> cp[i];
    }
    ll pn = cp[0];
    for (int i = 1; i < n; i += 1)
    {
        pn = (pn * x) + cp[i];
    }
    cout << pn << endl;
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
