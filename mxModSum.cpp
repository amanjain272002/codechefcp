#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int max1, smax;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        max1 = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] < max1)
            {
                smax = a[i];
                break;
            }
        }
        cout << max(2 * max1, smax + max1 + m + (smax - max1) % m) << "\n";
    }
}