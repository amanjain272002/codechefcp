#include <bits/stdc++.h>
#define ll long long
using namespace std;

void choco_chef()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            if (i % 2 != 0)
            {
                int cal = n - 2 * i;
                if (cal % 2 == 0 && cal != 0)
                {
                    cout << i << " " << i << " " << n - 2 * i << endl;
                    break;
                }
            }
        }
    }

    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            if (i % 2 == 0)
            {
                int cal = n - 2 * i;
                if (cal % 2 != 0 && cal != 0)
                {
                    cout << i << " " << i << " " << n - 2 * i << endl;
                    break;
                }
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        choco_chef();
    }

    return 0;
}