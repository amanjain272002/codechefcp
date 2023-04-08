#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int sum = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            sum = sum + min((25 * y), x);
            n = n - 100;
        }
        else
        {
            int val;
            if (n % 4 != 0)
            {
                val = n / 4 + 1;
            }
            else
            {
                val = n / 4;
            }
            val = val * y;
            sum = sum + min(val, x);
            break;
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