#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n > 4)
    {
        cout << 1 << " " << n - 1 << endl;
    }
    else
    {
        cout << 0 << " " << n << endl;
    }
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