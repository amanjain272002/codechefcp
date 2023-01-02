#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, mx = 0;
        cin >> n;
        long int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, (a[i] + b[n - 1 - i]));
        }
        cout << mx << endl;
    }

    return 0;
}