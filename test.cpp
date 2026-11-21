
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void solve()
{
    ll n;
    cin >> n;

    double x[n], d[n][n] = {0};

    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < n; i++)
    {
        cin >> d[i][0];
    }

    double pp;
    cin >> pp;

    double h = x[1] - x[0];
    double u = (pp - x[0]) / h;

    // Forward Difference Table
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            d[i][j] = d[i + 1][j - 1] - d[i][j - 1];
        }
    }

    double dy = 0, ddy = 0;

    double fact = 1;

    for (int j = 1; j < n; j++)
    {
        fact *= j;

        double sum1 = 0, sum2 = 0;

        for (int k = 0; k < j; k++)
        {
            double p = 1;

            for (int m = 0; m < j; m++)
            {
                if (m != k)
                    p *= (u - m);
            }

            sum1 += p;
        }

        for (int k = 0; k < j; k++)
        {
            for (int m = 0; m < j; m++)
            {
                if (k == m)
                    continue;

                double p = 1;

                for (int r = 0; r < j; r++)
                {
                    if (r != k && r != m)
                        p *= (u - r);
                }

                sum2 += p;
            }
        }

        dy += (sum1 / fact) * d[0][j];
        ddy += (sum2 / fact) * d[0][j];
    }

    cout << fixed << setprecision(4);

    cout << "First Derivative = " << dy / h << endl;
    cout << "Second Derivative = " << ddy / (h * h) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
