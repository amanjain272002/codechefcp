#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, n, k, v, ans = 0;
        cin >> n >> k >> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ans = ans + a;
        }
        ans = v * (n + k) - ans;
        if (ans % k == 0 && ans > 0)
        {
            cout << ans / k << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}