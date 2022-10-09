#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, p, q, mx = 0, mn = 1000000;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (mx < a[i])
            {
                mx = max(a[i - 1], a[i]);
            }
            if (mn > a[i])
            {
                mn = min(a[i - 1], a[i]);
            }
        }
        cout << mx - mn << endl;
    }

    return 0;
}