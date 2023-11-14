#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a;
    unordered_set<int> sp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sp.insert(a);
    }
    cout << sp.size() << endl;
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