#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    str s;
    cin >> s;
    str ss = s;
    reverse(ss.begin(), ss.end());
    ll c = 0;
    // corner case like 4500 or 0052 (no decimal)
    if (s.find('.') == string::npos)
    {
        while (1)
        {
            if (s.empty())
            {
                break;
            }
            if (s.back() == '0')
            {
                s.pop_back();
            }
            else
            {
                break;
            }
        }
        reverse(s.begin(), s.end());
        while (1)
        {
            if (s.empty())
            {
                break;
            }
            if (s.back() == '0')
            {
                s.pop_back();
            }
            else
            {
                break;
            }
        }
        cout << s.size() << endl;
        return;
    }
    // with decimal
    while (1)
    {
        if (ss.empty())
        {
            break;
        }
        if (ss.back() == '.')
        {
            ss.pop_back();
        }
        else if (ss.back() >= '1' and ss.back() <= '9')
        {
            break;
        }
        else

        {
            ss.pop_back();
            // c++;
        }
    }
    // cout << c + ss.size() << endl;
    // cout << ss << endl;
    for (auto cc : ss)
    {
        if (cc == '.')
        {
            c = -1;
        }
    }
    cout << c + ss.size() << endl;
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