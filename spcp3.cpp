#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;

    if (a % b == 0 && a > b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b - a % b << endl;
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
