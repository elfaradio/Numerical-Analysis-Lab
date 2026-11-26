

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a[3][4];

    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 4; j += 1)
        {
            cin >> a[i][j];
        }
    }

    double m21 = -a[1][0] / a[0][0];
    double m31 = -a[2][0] / a[0][0];

    for (int j = 0; j < 4; j += 1)
    {
        a[1][j] = a[1][j] + m21 * a[0][j];
        a[2][j] = a[2][j] + m31 * a[0][j];
    }

    double m32 = -a[2][1] / a[1][1];

    for (int j = 0; j < 4; j += 1)
    {
        a[2][j] = a[2][j] + m32 * a[1][j];
    }

    double z = a[2][3] / a[2][2];

    double y = (a[1][3] - a[1][2] * z) / a[1][1];

    double x = (a[0][3] - a[0][1] * y - a[0][2] * z) / a[0][0];

    cout << fixed << setprecision(2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
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
