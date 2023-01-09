#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n, k, m = 0,t=0;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
        t = min(t,a[i]);
    }

    if (k > 0 && k % 2 == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            a[i] = abs(a[i] - t);
        }
    }
    else if (k % 2 != 0 && k > 0)
    {
        for (ll i = 0; i < n; i++)
        {
            a[i] = m - a[i];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}