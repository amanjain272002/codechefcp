#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;
    cout << 2 * min(abs(x), abs(y)) + 2*abs(x - y) + (x - y) % 2 << endl;
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