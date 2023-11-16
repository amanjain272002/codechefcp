#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << "No"; // second friend will win
    }
    else if ((n == 1 && m % 2 == 0) || (m == 1 && n % 2 == 0))
    {
        cout << "Yes"; // first friend will win
    }
    else if ((n == 1 && m % 2 != 0) || (m == 1 && n % 2 != 0))
    {
        cout << "No"; // second friend will win
    }
    else
    {
        if (n % 2 != 0 && m % 2 != 0)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    cout<<endl;
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