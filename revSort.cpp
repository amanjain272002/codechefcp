#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, sum = 0, count = 0, index;
        cin >> n >> x;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (sum <= x)
            {
                sum = sum + a[i];
                index = i;
            }
        }
        sort(a, a + index);
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}