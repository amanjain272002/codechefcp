#include <iostream>
#define ll long long int
using namespace std;

void wed()
{
    ll n, m, k, a, flag = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (m - a < k-1)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        wed();
    }

    return 0;
}