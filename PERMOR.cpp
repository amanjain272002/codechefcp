#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int small = 1, large = n;
    while (small < large)
    {
        cout << small++ << " " << large-- << " ";
    }
    if (n % 2 != 0)
    {
        cout << small;
    }

    cout << endl;
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