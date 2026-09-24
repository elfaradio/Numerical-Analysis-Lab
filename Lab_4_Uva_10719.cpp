

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    ll k;
    while (cin >> k)
    {

        string s;
        cin.ignore();
        getline(cin, s);
        // cout << s << endl;
        vector<ll> px;
        for (int i = 0; i < s.size(); i += 1)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            ll x = 0, f = 0;
            if (s[i] == '-')
            {
                f = 1;
                i += 1;
            }
            while (i < s.size() and s[i] != ' ')
            {
                x = x * 10 + s[i] - '0';
                i += 1;
            }
            if (f)
            {
                x *= -1;
            }
            px.push_back(x);
        }
        // for (auto c : px)
        // {
        //     cout << c << " ";
        // }
        // cout << endl;
        vector<ll> qx;
        qx.push_back(px[0]);
        for (int i = 1; i < px.size() - 1; i += 1)
        {
            qx.push_back(px[i] + (qx.back() * k));
        }
        ll r = ((qx.back() * k) + px.back());
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
