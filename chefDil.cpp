#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cntzero = 0, cntone = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            cntzero++;
        }
        else
        {
            cntone++;
        }
    }
    if (cntone % 2 != 0)
    {
        cout << "WIN" << endl;
    }
    else
    {
        cout << "LOSE" << endl;
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