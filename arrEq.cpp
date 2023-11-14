#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ele;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        mp[ele]++;
    }
    int hlf = n - (n/2);
    for (auto i : mp)
    {
        if (i.second > hlf)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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