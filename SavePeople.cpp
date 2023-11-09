#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x, y;
    cin >> x >> y;
    cout << max(max((n - x) * m, (x - 1) * m), max((m - y) * n, (y - 1) * n)) << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}