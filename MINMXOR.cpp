#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, ele;
    cin >> n;
    vector<ll> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    ll mink = ans;
    for (int i = 0; i < n; i++)
    {
        ll mink1 = ans ^ arr[i];
        mink = min(mink, mink1);
    }
    cout << mink << endl;
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