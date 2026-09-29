

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    string a, b;

    while (getline(cin, a) and getline(cin, b))
    {
        stringstream ss1(a);
        stringstream ss2(b);

        vector<ll> c;
        vector<ll> x;

        ll d;

        while (ss1 >> d)
        {
            c.push_back(d);
        }

        while (ss2 >> d)
        {
            x.push_back(d);
        }

        for (int i = 0; i < x.size(); i += 1)
        {
            ll ans = 0;

            for (int j = 0; j < c.size(); j += 1)
            {
                ans = ans * x[i] + c[j];
            }

            if (i == x.size() - 1)
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans << " ";
            }
        }

        // cout << endl;
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
