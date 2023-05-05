#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(long int n)
{
    long int a[n], mn;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mn = abs(a[0] - a[1]);
    for (int i = 2; i < n; i++)
    {
        if (i == n - 1)
        {
            mn = min(mn, abs(a[i] - a[i - 1]));
        }
        else
        {
            mn = min(mn, max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
        }
    }
    cout << mn << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        solve(n);
    }
}