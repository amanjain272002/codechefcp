#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k, l;
        cin >> n >> k >> l;
        if (k * l < n)
        {
            cout << -1 << endl;
        }
        else if (k == 1 && n > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % k == 0)
                {
                    cout << k << " ";
                }
                else
                    cout << i % k << " ";
            }
            cout << endl;
        }
    }

    return 0;
}