#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    string s;
    getline(cin, s);
    // cout << s << endl;
    vector<int> v;
    string ss = "";
    for (int i = 0; i < s.size(); i += 1)
    {
        if (s[i] == ' ')
        {
            if (ss != "")
            {
                int x = stoi(ss);
                v.push_back(x);
                ss = "";
            }
        }
        else
        {
            ss += s[i];
        }
    }
    if (ss != "")
    {
        v.push_back(stoi(ss));
    }

    // int ans = 0;
    // for (auto c : v)
    // {
    // // ans += c;
    // cout << c << endl;
    // }
    // // cout << ans << endl;
    cout << "Total :" << v.size() << endl;
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << i + 1 << " " << v[i] << endl;
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