#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;

void rsp()
{
    ll n, evens = 0, a;
    cin >> n;
    ll md = pow(10,7);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            evens++;
        }
    }
    ll ans = 1;
    for (int i = 0; i < evens; i++)
    {
        ans = ans*2;
        ans = ans%md;
    }
    if (evens == n)
    {
        ans--;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        rsp();
    }

    return 0;
}