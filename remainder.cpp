

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
    vector<ll> px(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> px[i];
    }
    vector<ll> qx;
    qx.push_back(px[0]);
    for (int i = 1; i < px.size() - 1; i += 1)
    {
        qx.push_back(px[i] + (qx.back() * x));
    }
    ll r = ((qx.back() * x) + px.back());
    cout << "q(x):";
    for (auto c : qx)
    {
        cout << " " << c;
    }
    cout << endl;
    cout << "r = ";
    cout << r << endl;
    cout << endl;
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
