#include <iostream>
using namespace std;

void solve()
{
    int n, a, sum = 0;
    cin >> n;
    a = n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && a > 0)
        {
            sum = sum + a * a;
            a = a - 2;
        }
    }
    cout << sum << endl;
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