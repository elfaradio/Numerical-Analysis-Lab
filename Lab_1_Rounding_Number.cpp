#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    str s;
    ll n;
    cin >> s >> n;
    ll j = -1;
    j = s.find('.');
    // cout << j << endl;
    for (int i = j + 1; i < s.size(); i += 1)
    {
        if (i == j + n + 1)
        {
            if (s[i] - '0' > 5)
            {
                if (s[i - 1] - '0' == 9)
                {
                    s[i - 1] = '0';
                    s[i - 2]++;
                }
                else
                {
                    s[i - 1]++;
                }
                break;
            }

            else if (s[i] - '0' < 5)
            {
                continue;
                break;
            }
            else if (s[i] - '0' == 5)
            {
                ll x = s[i - 1] - '0';
                if (x % 2)
                {
                    if (s[i - 1] - '0' == 9)
                    {
                        s[i - 1] = '0';
                        s[i - 2]++;
                    }
                    else
                    {
                        s[i - 1]++;
                    }
                    break;
                }
            }
        }
    }
    str ss = "";
    for (int i = 0; i < s.size(); i += 1)
    {
        if (i == j + n + 1)
        {
            break;
        }
        else
        {
            ss += s[i];
        }
    }
    cout << ss << endl;
}

int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        solve();
    }
}