#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int totalPlayed = x + y;
    int diff = abs(x - y);
    if ((totalPlayed + diff) % 2 == 0)
    {
        cout << totalPlayed + diff - 1;
    }
    else
    {
        cout << totalPlayed + diff - 2;
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