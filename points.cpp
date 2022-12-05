#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define f first
#define s second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
using namespace std;

bool comp(const pi &a, const pi &b)
{
    if (a.f == b.f)
    {
        return a.s > b.s;
    }
    return a.f < b.f;
}
void solve()
{
    int n, a, b;
    cout<<endl;
    cin >> n;
    vector<pi> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].f>>v[i].s;
    }
    
    sort(v.begin(), v.end(), comp);
    double ans = 0.0;
    for (int i = 1; i < n; i++)
    {
        ans += sqrt((v[i].f - v[i - 1].f) * (v[i].f - v[i - 1].f) + (v[i].s - v[i - 1].s) * (v[i].s - v[i - 1].s));
    }
    ans = trunc(ans*100.0)/100.0;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}