
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    double x[5] = {1, 2, 3, 4, 5};
    double y[5] = {1, 8, 27, 64, 125};

    double d[5][5] = {};

    // Difference table
    for (int i = 0; i < n; i++)
        d[i][0] = y[i];

    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            d[i][j] = d[i + 1][j - 1] - d[i][j - 1];
        }
    }

    // Newton forward polynomial coefficients
    vector<double> p(1, d[0][0]);
    vector<double> basis(1, 1.0);

    double fact = 1;

    for (int k = 1; k < n; k++)
    {
        fact *= k;

        vector<double> temp(basis.size() + 1, 0);

        for (int i = 0; i < basis.size(); i++)
        {
            temp[i] -= (k - 1) * basis[i];
            temp[i + 1] += basis[i];
        }

        basis = temp;

        if (p.size() < basis.size())
            p.resize(basis.size(), 0);

        for (int i = 0; i < basis.size(); i++)
        {
            p[i] += (d[0][k] / fact) * basis[i];
        }
    }

    double X;
    // cout << "Enter x: ";
    cin >> X;

    double h = 1.0;
    double u = (X - x[0]) / h;

    // First derivative coefficients
    vector<double> dp(p.size() - 1);

    for (int i = 1; i < p.size(); i++)
        dp[i - 1] = i * p[i];

    // Second derivative coefficients
    vector<double> ddp(dp.size() - 1);

    for (int i = 1; i < dp.size(); i++)
        ddp[i - 1] = i * dp[i];

    // Evaluate first derivative using Horner's method
    double first = 0;

    for (int i = dp.size() - 1; i >= 0; i--)
        first = first * u + dp[i];

    // Evaluate second derivative
    double second = 0;

    for (int i = ddp.size() - 1; i >= 0; i--)
        second = second * u + ddp[i];

    cout << fixed << setprecision(4);

    cout << "First Derivative = " << first / h << endl;
    cout << "Second Derivative = " << second / (h * h) << endl;

    return 0;
}
