#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    string ans = "";
    int check = 0;
    int l;
    if (n % 2 == 0)
        l = n / 2;
    else
        l = n / 2 + 1;
    int cnt = x;
    if ((n % 2 == 0 && x <= l) || (n % 2 != 0 && x <= l))
    {
        check = 1;
        while (x < l)
        {
            ans = ans + 'a';
            x++;
        }
        for (int i = 0; i < cnt; i++)
        {
            ans = ans + char('a' + i);
        }
        cout << ans;
        if (n % 2 != 0)
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    if (check == 0)
    {
        cout << "-1";
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