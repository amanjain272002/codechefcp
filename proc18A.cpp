#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, inp;
        cin >> n >> k;

        vector<ll> prf(n+1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> inp;
            prf[i] = prf[i - 1] + inp;
        }
        ll ans = -1;
        for (int i = k; i <= n; i++)
        {
            ans = max(ans, prf[i] - prf[i - k]);
        }
        cout << ans << endl;
    }
}