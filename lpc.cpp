#include <bits/stdc++.h>
#define ll long long
using namespace std;

void l_p_c()
{
    ll n, m, mn = INT_MAX;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;

    ll ans=0;
    for (int i = 0; i < n - m + 1; i++)
    {
        ans = 0;
        for (int j = 0; j < m; j++)
        {
            ll x = abs(s[i+j]-k[j]);
            if (x>5)
            {
                x = 10 - x;
            }
            ans+=x;
        }
        mn = min(mn,ans);
    }
    cout << mn << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        l_p_c();
    }

    return 0;
}