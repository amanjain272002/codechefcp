#include <bits/stdc++.h>
#define ll long long
using namespace std;

void warrior_chef()
{
    ll n, h, ele, ans = 0;
    cin >> n >> h;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        a.push_back(ele);
    }
    sort(a.begin(), a.end(),greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (h > a[i])
        {
            h = h - a[i];
            // cout<<h<<" ";
        }
        else
        {
            ans = a[i];
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        warrior_chef();
    }
}