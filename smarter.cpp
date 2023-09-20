#include <iostream>
#define ll long long
using namespace std;

void smart()
{
    ll l, v1, v2;
    cin >> l >> v1 >> v2;
    int ans = 0;
    if (l % v1 == 0 && l % v2 == 0)
    {
        ans = l / v1 - l / v2;
    }
    else
    {
        int a, b;
        if (l % v1 != 0)
        {
            a = l / v1 + 1;
        }
        if (l % v2 != 0)
        {
            b = l / v2 + 1;
        }
        if (l % v1 == 0)
        {
            a = l / v1;
        }
        if (l % v2 == 0)
        {
            b = l / v2;
        }
        ans = a - b;
    }

    cout << ans - 1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        smart();
    }

    return 0;
}