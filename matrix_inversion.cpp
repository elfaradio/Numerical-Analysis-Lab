

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve()
{
    // By Farhadul Islam
    // Only Brute Force Bhai
    double a[3][3], b[3];
    double inv[3][3];
    double x[3] = {0, 0, 0};

    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 3; j += 1)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    double det =
        a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    if (fabs(det) < 0.000001)
    {
        cout << "Inverse does not exist" << endl;
        return;
    }

    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 3; j += 1)
        {
            inv[i][j] =
                (a[(j + 1) % 3][(i + 1) % 3] *
                     a[(j + 2) % 3][(i + 2) % 3] -
                 a[(j + 1) % 3][(i + 2) % 3] *
                     a[(j + 2) % 3][(i + 1) % 3]) /
                det;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i] += inv[i][j] * b[j];
        }
    }

    cout << "det= " << det << endl;

    cout << "inv:" << endl;

    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 3; j += 1)
        {
            cout << inv[i][j] << " ";
        }

        cout << endl;
    }

    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;
}
int32_t main()
{
    int t = 1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //  cin >> t;
    while (t--)
    {
        solve();
    }
}
