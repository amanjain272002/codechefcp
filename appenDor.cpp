#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int solve(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, y, sum = 0, c, d;
        cin >> n >> y;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = a[i] | sum;
        }
        c = solve(sum);
        d = solve(y);
        if (c > d || (c == d && sum != y))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << y - sum << endl;
        }
    }

    return 0;
}