#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k, sum = 0;
        cin >> n >> k;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = k; i < n - k; i++)
        {
            sum = sum + a[i];
        }
        double x = n - 2 * k;
        cout<<fixed<<setprecision(6);
        cout << sum / x << endl;
    }

    return 0;
}