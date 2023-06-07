#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;

void rsp()
{
    ll n, a, clc = 0, sm = 1;
    cin >> n;
    ll md = powl(10, 9) + 7;
    ll prf[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        prf[i + 1] = a + prf[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if ((prf[i] - prf[i - 1]) % 2 == 0)
        {
            clc++;
        }
    }
    sm += (clc * (clc + 1) / 2) % md;
    cout << sm << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rsp();
    }

    return 0;
}