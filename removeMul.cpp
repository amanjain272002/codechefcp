#include <iostream>
#define ll long long int
using namespace std;

void ml()
{
    ll n, m, a, ev = 0, sumev = 0,sumov=0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            ev=ev+1;
        }
    }
    if (ev)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
        }
    }
    cout << sum << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ml();
    }

    return 0;
}
