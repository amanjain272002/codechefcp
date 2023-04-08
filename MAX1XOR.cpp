#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    char prev;
    prev = '0';
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != prev)
        {
            prev = '1';
            cnt++;
        }
        else
        {
            prev = '0';
        }
    }

    prev = '1';
    int cn = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != prev)
        {
            prev = '1';
            cn++;
        }
        else
        {
            prev = '0';
        }
    }

    cout << max(cnt, cn) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}