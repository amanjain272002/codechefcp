#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int totalPeople = 2 * n;
    int unrated = 2 * n - x;
    int rated = x;
    if (rated <= unrated)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << rated - unrated << endl;
    }
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