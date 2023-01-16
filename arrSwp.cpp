#include <iostream>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int n;
    cin >> n;
    long int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    long int m = INT_MAX;
    for (int i = 2 * n - 1; i >= n; i--)
    {
        m = min(m, a[i] - a[i - n + 1]);
    }

    cout << m << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}