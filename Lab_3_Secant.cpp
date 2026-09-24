#include <bits/stdc++.h>
using namespace std;

#define E 0.005

double f(double x)
{
    return (x * x) - (4 * x) - 10;
}

void solve()
{
    double x1, x2, x3;

    cin >> x1 >> x2;

    while (true)
    {
        if (abs(f(x2) - f(x1)) < 1e-12)
        {
            cout << "Division by zero\n";
            return;
        }

        x3 = x2 - ((f(x2) * (x2 - x1)) / (f(x2) - f(x1)));
        cout << x3 << endl;
        // cout << x3 << endl;

        if (abs(x3 - x2) < E)
            break;

        x1 = x2;
        x2 = x3;
    }

    cout << fixed << setprecision(3);
    cout << "Root = " << x3 << '\n';
}

int main()
{
    solve();
    return 0;
}