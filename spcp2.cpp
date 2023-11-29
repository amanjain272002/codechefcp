#include <iostream>
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;
    if (n < 100 && x >= 1)
    {
        cout << 0 << endl;
    }
    else if (n % 100 == 0)
    {
        if (x >= n / 100)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n / 100 - x << endl;
        }
    }
    else
    {
        int pas = n / 100 + 1;
        if (x >= pas)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << pas - x << endl;
        }
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
