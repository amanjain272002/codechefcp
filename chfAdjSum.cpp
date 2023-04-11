#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    ll int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    ll int sum = a[n - 2] + a[n - 1];
    ll int same = 0, diff = 0;
    if (n == 2)
    {
        cout << "NO" << endl;
    }

    else if (a[n - 2] == a[n - 1])
    {
        if (a[n / 2 - 1] == a[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        if (a[n - 2] != a[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}