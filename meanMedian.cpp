#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int a, b, c;
    b = y;
    if (y >= 0)
    {
        c = 500;
        a = 3 * x - b - c;
    }
    else
    {
        a = -500;
        c = 3 * x - b - a;
    }

    cout << a << " "
         << " " << b << " " << c << endl;
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