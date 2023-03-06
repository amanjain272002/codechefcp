#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solve()
{
    int n, a, mx = 0, nx = 0;
    cin >> n;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        m[a]++;
        mx = max(mx, m[a]);
    }

    if (m.size() == 1 && n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else if (m.size() == 1 && n % 2 != 0)
    {
        cout << n / 2 + 1 << endl;
    }
    else
    {
        for (auto i : m)
        {
            if (i.second > nx && i.second != mx)
            {
                nx = max(nx, i.second);
            }
        }
        if (mx % 2 == 0)
        {
            cout << max(mx / 2, nx) << endl;
        }
        else
        {
            cout << max(mx / 2 + 1, nx) << endl;
        }
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