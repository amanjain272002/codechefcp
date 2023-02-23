#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, m;
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        m = a[n - 1];
        for (int i = 1; i < n; i++)
        {
            m = min(m, a[i] - a[i - 1]);
        }
        cout << m << endl;
    }

    return 0;
}