#include <iostream>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    if ((n * (n + 1) / 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int a[n / 2] = {0};
        int b[n / 2] = {0};
        int k = 0, p = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (i % 2 != 0)
            {
                a[k] = i;
                k++;
            }
            else
            {
                b[p] = i;
                p++;
            }
        }
        for (int i = n / 2 + 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                b[p] = i;
                p++;
            }
            else
            {
                a[k] = i;
                k++;
            }
        }

        for (int i = 0; i < n / 2; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}