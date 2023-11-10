#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s1, s2, ans = "";
    cin >> s1 >> s2;
    int len = s2.length(), cntone = 0;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end(), greater<char>());

    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            cntone++;
        }
    }
    for (int i = 0; i < cntone; i++)
    {
        cout << 1;
    }
    for (int i = cntone; i < len; i++)
    {
        cout << 0;
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}