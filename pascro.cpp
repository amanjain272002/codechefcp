#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, chefWin = 0, chefinaWin = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            if ((s1[i] == 'P' && s2[i] == 'R') || (s1[i] == 'S' && s2[i] == 'P') || (s1[i] == 'R' && s2[i] == 'S'))
            {
                chefWin++;
            }
            else 
            {
                chefinaWin++;
            }
        }
    }
    if (chefinaWin >= chefWin)
    {
        int avg = (chefinaWin + chefWin) / 2;
        avg++;
        cout << avg - chefWin << endl;
    }
    else
    {
        cout << 0 << endl;
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