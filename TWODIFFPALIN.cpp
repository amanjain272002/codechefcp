#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll int a, b;
    cin >> a >> b;
    if ((a % 2 == 0 || b % 2 == 0) && (a != 1 && b != 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}