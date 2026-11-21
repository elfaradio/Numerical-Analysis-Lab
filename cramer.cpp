
#include <bits/stdc++.h>
using namespace std;

long long det(long long a[3][3])
{
    return a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
}

void solve()
{
    long long a[3][3], b[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

        cin >> b[i];
    }

    long long d = det(a);

    long long d1[3][3], d2[3][3], d3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            d1[i][j] = a[i][j];
            d2[i][j] = a[i][j];
            d3[i][j] = a[i][j];
        }

        d1[i][0] = b[i];
        d2[i][1] = b[i];
        d3[i][2] = b[i];
    }

    long long x1 = det(d1);
    long long x2 = det(d2);
    long long x3 = det(d3);

    cout << x1 << " " << x2 << " " << x3 << " " << d << "\n";

    if (d == 0)
    {
        cout << "No unique solution\n";
    }
    else
    {
        double ans1 = (double)x1 / d;
        double ans2 = (double)x2 / d;
        double ans3 = (double)x3 / d;

        if (abs(ans1) < 0.0005)
            ans1 = 0;
        if (abs(ans2) < 0.0005)
            ans2 = 0;
        if (abs(ans3) < 0.0005)
            ans3 = 0;

        cout << fixed << setprecision(3);
        cout << "Unique solution: " << ans1 << " "
             << ans2 << " " << ans3 << "\n";
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
